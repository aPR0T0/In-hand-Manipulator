//Components
#include "sra_board.h"
//#define debug

// C Headers
#include <stdio.h>
#include <math.h>

// PCNT counter
#include <driver/pcnt.h>

// Including Web-Socket files
#include <tuning_http_server.h>
#include <wifi_handler.h>

//Limiting Variables
#define MAX_PITCH_CORRECTION (90.0f)
#define MAX_PITCH_AREA (850.0f)
#define MAX_PITCH_RATE (850.0f)

#define MAX_PWM (80.0f)
#define MIN_PWM (60.0f)

#define MOTORA 0
#define MOTORB 1

static const gpio_num_t enc_read_pinA = GPIO_NUM_14;
static const gpio_num_t enc_read_pinB = GPIO_NUM_12;
static const gpio_num_t motor_A_pinA = GPIO_NUM_32;
static const gpio_num_t motor_A_pinB = GPIO_NUM_33;
static const gpio_num_t motor_B_pinA = GPIO_NUM_19;
static const gpio_num_t motor_B_pinB = GPIO_NUM_21;

#define PCNT_H_LIM_VAL      180
#define PCNT_L_LIM_VAL     -180
#define PCNT_THRESH1_VAL    10
#define PCNT_THRESH0_VAL   -10
#define PCNT_INPUT_SIG_IO   enc_read_pinA  // Pulse Input GPIO
#define PCNT_INPUT_CTRL_IO  enc_read_pinB  // Control GPIO HIGH=count up, LOW=count down

typedef struct {
    int unit;  // the PCNT unit that originated an interrupt
    uint32_t status; // information on the event type that caused the interrupt
} pcnt_evt_t;

/* Decode what PCNT's unit originated an interrupt
 * and pass this information together with the event type
 * the main program using a queue.
 */

static void IRAM_ATTR pcnt_example_intr_handler(void *arg)
{
    int pcnt_unit = (int)arg;
    pcnt_evt_t evt;
    evt.unit = pcnt_unit;
    /* Save the PCNT event type that caused an interrupt
       to pass it to the main program */
    pcnt_get_event_status(pcnt_unit, &evt.status);
}
/* Self Balancing Tuning Parameters
float forward_offset = 2.51f;
float forward_buffer = 3.1f;
*/

// Function to enable Motor driver A in Normal Mode
void run_motorA(int direction, int duty_cycle)
{
	for ( int i = 0; i <= 100; i++ ){
		if (i <= duty_cycle){
			if (direction == 1) {
				gpio_set_level(motor_A_pinA, 1);
				gpio_set_level(motor_A_pinB, 0);
			} else if (direction == -1) {
				gpio_set_level(motor_A_pinA, 0);
				gpio_set_level(motor_A_pinB, 1);
			} else if (direction == 0) {
				gpio_set_level(motor_A_pinA, 0);
				gpio_set_level(motor_A_pinB, 0);
			}
		}
		else{
			gpio_set_level(motor_A_pinA, 0);
			gpio_set_level(motor_A_pinB, 0);
		}
		vTaskDelay(100/portTICK_PERIOD_MS);
	}
}

void run_motorB(int direction, int duty_cycle)
{
	for ( int i = 0; i <= duty_cycle; i++ ){

		if (direction == 1) {
			gpio_set_level(motor_B_pinA, 1);
			gpio_set_level(motor_B_pinB, 0);
		} else if (direction == -1) {
			gpio_set_level(motor_B_pinA, 0);
			gpio_set_level(motor_B_pinB, 1);
		} else if (direction == 0) {
			gpio_set_level(motor_B_pinA, 0);
			gpio_set_level(motor_B_pinB, 0);
		}
		vTaskDelay(100/portTICK_PERIOD_MS);
	}
	for (int i = duty_cycle ; i<=100 ; i++){

		gpio_set_level(motor_B_pinA, 0);
		gpio_set_level(motor_B_pinB, 0);
		vTaskDelay(100/portTICK_PERIOD_MS);
	}
}

// Calculate the motor inputs according to angle of the MPU
int calculate_motor_command(const float ang_err, float *motor_cmd)
{
	
	int target = read_pid_const().setpoint;
	target = -20;
	int dir = 0;
	/** Error values **/
	// Stores pitch error of previous iteration
	// static float prev_ang_err = 0.0f;
	// Stores sum of product of errors with time interval obtained during each iteration
	static float ang_area = 0.0f;
	// Stores difference between current error and previous iteration error
	float ang_err_diff = 0.0f;

	/** Correction values **/
	// Variables for storing corrected values
	float ang_correction = 0.0f, absolute_pitch_correction = 0.0f;
	// Helper variables for calculating integral and derivative correction
	float ang_diff_rate = 0.0f;

	// Variables storing correction values of different error terms
	float P_term = 0.0f, I_term = 0.0f, D_term = 0.0f;

	// Evaluated delta(error)
	ang_err_diff = ang_err - target;

	// Evaluated area of the graph error vs time (cumulative error)
	ang_area += (ang_err);
	// evaluated delta(error)/delta(time) to calculate rate of change in error w.r.t time
	ang_diff_rate = ang_err_diff;

	// Calculating p,i and d terms my multuplying corresponding proportional constants
	P_term = read_pid_const().kp * ang_err;
	I_term = read_pid_const().ki * bound(ang_area, -MAX_PITCH_AREA, MAX_PITCH_AREA);
	D_term = read_pid_const().kd * bound(ang_diff_rate, -MAX_PITCH_RATE, MAX_PITCH_RATE);

	ang_correction = P_term + I_term + D_term;

	if (ang_correction > 0)
	{
		dir = 1;
	} else if (ang_correction < 0 ){
		dir = -1;
	} else{
		dir = 0;
	}

	absolute_pitch_correction = fabsf(ang_correction);

	*motor_cmd = bound(absolute_pitch_correction, 0, MAX_PITCH_CORRECTION);

	return dir;
	// prev_ang_err = ang_err;
}

int readEncoder() {

	// pcnt_get_counter_value(unit, &count);
	// int position = 0;
	// int lastEncoded = 0;
	// int encoded;

	// encoded = (gpio_get_level(enc_read_pinA) << 1) | gpio_get_level(enc_read_pinB);
	// int sum = (lastEncoded << 2) | encoded;
	
	// if (sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) {
	// 	position++;
	// } else if (sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) {
	// 	position--;
	// }
	// // Hypothesis:
	// // Wave 1 => 00 11 00 11 00 11 00 11 00 11, amplitude lasts for two timeframes
	// // Wave 2 => 11 00 11 00 11 00 11 00 11 00, amplitude lasts for two timeframes

	// // Use 'position' as the relative encoder value, and do whatever you need to do with it
	
	// lastEncoded = encoded;

	// return position;
	return 0;
}

//The main task to balance the robot	
void balance_task(void *arg)
{	
	int16_t angle = 0;
	int unit = PCNT_UNIT_0;
	/**
	 * Configuring GPIOs	
	 */

	gpio_config_t io_conf = {
        .mode = GPIO_MODE_INPUT,
        .intr_type = GPIO_INTR_DISABLE,
        .pull_down_en = 0,
        .pull_up_en = 1,
        .pin_bit_mask = ((1ULL<<enc_read_pinA) | (1ULL<<enc_read_pinB)),
    };
	gpio_config_t io_conf2 = {
        .mode = GPIO_MODE_OUTPUT,
        .intr_type = GPIO_INTR_DISABLE,
        .pull_down_en = 0,
        .pull_up_en = 1,
        .pin_bit_mask = ((1ULL<<motor_A_pinA) | (1ULL<<motor_A_pinB) | (1ULL<<motor_B_pinA) | (1ULL<<motor_B_pinB)),
    };


	esp_err_t err = gpio_config(&io_conf);
	esp_err_t err = gpio_config(&io_conf2);

	if (err==ESP_OK)
	{
		ESP_LOGI("debug", "GPIOs configured ");
	}
	else
	{
		ESP_LOGI("debug", "GPIOs not configured ");
	}

	pcnt_config_t pcnt_config = {
		// Set PCNT input signal and control GPIOs
		.pulse_gpio_num = PCNT_INPUT_SIG_IO,
		.ctrl_gpio_num = PCNT_INPUT_CTRL_IO,
		.channel = PCNT_CHANNEL_0,
		.unit = unit,
		// What to do on the positive / negative edge of pulse input?
		.pos_mode = PCNT_COUNT_INC,   // Count up on the positive edge
		.neg_mode = PCNT_COUNT_DIS,   // Keep the counter value on the negative edge
		// What to do when control input is low or high?
		.lctrl_mode = PCNT_MODE_REVERSE, // Reverse counting direction if low
		.hctrl_mode = PCNT_MODE_KEEP,    // Keep the primary counter mode if high
		// Set the maximum and minimum limit values to watch
		.counter_h_lim = PCNT_H_LIM_VAL,
		.counter_l_lim = PCNT_L_LIM_VAL,
    };
    /* Initialize PCNT unit */
    pcnt_unit_config(&pcnt_config);

	 /* Configure and enable the input filter */
    pcnt_set_filter_value(unit, 100);
    pcnt_filter_enable(unit);

    /* Set threshold 0 and 1 values and enable events to watch */
    pcnt_set_event_value(unit, PCNT_EVT_THRES_1, PCNT_THRESH1_VAL);
    pcnt_event_enable(unit, PCNT_EVT_THRES_1);
    pcnt_set_event_value(unit, PCNT_EVT_THRES_0, PCNT_THRESH0_VAL);
    pcnt_event_enable(unit, PCNT_EVT_THRES_0);
    /* Enable events on zero, maximum and minimum limit values */
    pcnt_event_enable(unit, PCNT_EVT_ZERO);
    pcnt_event_enable(unit, PCNT_EVT_H_LIM);
    pcnt_event_enable(unit, PCNT_EVT_L_LIM);

    /* Initialize PCNT's counter */
    pcnt_counter_pause(unit);
    pcnt_counter_clear(unit);

    /* Install interrupt service and add isr callback handler */
    pcnt_isr_service_install(0);
    pcnt_isr_handler_add(unit, pcnt_example_intr_handler, (void *)unit);

    /* Everything is set up, now go to counting */
    pcnt_counter_resume(unit);
	
	/**
	 * euler_angles are the complementary pitch and roll angles obtained from mpu6050
	 * mpu_offsets are the initial accelerometer angles at rest position
	*/
	// float euler_angle[2], mpu_offset[2] = {0.0f, 0.0f};

	/**
	 * 1. motor_cmd :   Stores theoritically calculated correction values obtained with PID.
	 * 2. motor_pwm :   Variable storing bounded data obtained from motor_cmd which will be used for
					:   giving actual correction velocity to the motors
	*/
	float motor_cmd, motor_pwm = 0.0f;

	// Pitch angle where you want to go - pitch_cmd, setpoint and mpu_offsets are linked to one another
	// float pitch_cmd = 0.0f;
#ifdef CONFIG_ENABLE_OLED
    // Initialising the OLED
    ESP_ERROR_CHECK(init_oled());
	vTaskDelay(100);

    // Clearing the screen
    lv_obj_clean(lv_scr_act());
#endif	

	gpio_set_level(motor_A_pinA, 0);
	gpio_set_level(motor_A_pinB, 0);

		// Function to enable Motor driver A in Normal Mode
	enable_motor_driver(a, NORMAL_MODE);
	while (1)
	{
		pcnt_get_counter_value(unit, &angle);
		ESP_LOGI("debug", "Angle: %d", angle);
		int dir = calculate_motor_command(angle, &motor_cmd);

		//bound PWM values between max and min	

		motor_pwm = bound((motor_cmd), MIN_PWM, MAX_PWM);
		// Bot tilts downwards
		if ((dir) == 1)
		{
			ESP_LOGI("debug", "Motor PWM:+ve\n");
			run_motorA(dir, motor_pwm);
		}

		// Bot tilts Upwards
		if ((dir) == -1)
		{
			ESP_LOGI("debug", "Motor PWM:-ve\n");
			run_motorA(dir, motor_pwm);	
		}

		// Bot remains in desired region for vertical balance
		else
		{
			run_motorA(0, 0);
		}	

		//ESP_LOGI("debug","left_duty_cycle:  %f    ::  right_duty_cycle :  %f  :: error :  %f  correction  :  %f  \n",left_duty_cycle, right_duty_cycle, error, correction);
		// ESP_LOGI("debug", "KP: %f ::  KI: %f  :: KD: %f :: Setpoint: %0.2f :: Roll: %0.2f | Pitch: %0.2f | PitchError: %0.2f", read_pid_const().kp, read_pid_const().ki, read_pid_const().kd, read_pid_const().setpoint, euler_angle[0], euler_angle[1], ang_err);
		// ESP_LOGI("debug", "Pitch: %0.2f", pitch_angle);
#ifdef CONFIG_ENABLE_OLED
		// Diplaying kp, ki, kd values on OLED
		if (read_pid_const().val_changed)
		{
			display_pid_values(read_pid_const().kp, read_pid_const().ki, read_pid_const().kd);
			reset_val_changed_pid_const();
		}
#endif				
		vTaskDelay(100 / portTICK_PERIOD_MS);
		
	}


	// Remove the task from the RTOS kernel management
	vTaskDelete(NULL);
}

void app_main()
{
  // Starts tuning server for wireless control
	// start_tuning_http_server();	

	// xTaskCreate -> Create a new task and add it to the list of tasks that are ready to run
	xTaskCreate(&balance_task, "balance task", 4096, NULL, 1, NULL);
}