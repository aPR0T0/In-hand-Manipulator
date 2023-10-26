#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"

#include "dynamixel_sdk_inf/msg/set_position.hpp"
#include "dynamixel_sdk_inf/msg/set_pose.hpp"

#include <cstdio>
#include <cstdlib>
#include <memory>
#include <string>
#include <chrono>

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class PositionPublisher : public rclcpp::Node
{
  public:
    PositionPublisher()
    : Node("pos_pub"), count_(0)
    {
      publisher_ = this->create_publisher<dynamixel_sdk_inf::msg::SetPose>("set_position", 1000);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&PositionPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      auto pose_message = dynamixel_sdk_inf::msg::SetPose();
      std::cout<<"Set Number of motors : 0 ~ 255\n";
      int motor_num;
      std::cin>>motor_num;
      for (int i = 0; i < motor_num; i++){
        std::cout<< "Enter the desired position for the motor, from 0  ~  4095\n";
        int32_t pos_temp;
        std::cin>>pos_temp;
        pose_message.position.push_back(pos_temp);
        std::cout<< "Enter the desired motor id, from 0 ~ 255\n";
        int8_t id_temp;
        std::cin>>id_temp;
        pose_message.id.push_back(id_temp - 48);
        RCLCPP_INFO(this->get_logger(), "Position: '%d' | ID: '%d'\n", pose_message.position[i], pose_message.id[i]);
      }
      publisher_->publish(pose_message);  
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<dynamixel_sdk_inf::msg::SetPose>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PositionPublisher>());
  rclcpp::shutdown();
  return 0;
}
