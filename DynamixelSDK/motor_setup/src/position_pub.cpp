#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"

#include "dynamixel_sdk_inf/msg/set_position.hpp"

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
      publisher_ = this->create_publisher<dynamixel_sdk_inf::msg::SetPosition>("set_position", 1000);
      timer_ = this->create_wall_timer(
      500ms, std::bind(&PositionPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      auto pose_message = dynamixel_sdk_inf::msg::SetPosition();
      std::cout<< "Enter the desired position for the motor\n";
      std::cin>>pose_message.position;
      pose_message.id = 1;
      RCLCPP_INFO(this->get_logger(), "Position: '%d' | ID: '%d'\n", pose_message.position, pose_message.id);
      publisher_->publish(pose_message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<dynamixel_sdk_inf::msg::SetPosition>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PositionPublisher>());
  rclcpp::shutdown();
  return 0;
}
