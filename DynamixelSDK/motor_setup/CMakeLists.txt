cmake_minimum_required(VERSION 3.8)
project(motor_setup)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(composition REQUIRED)
find_package(dynamixel_sdk REQUIRED)
find_package(dynamixel_sdk_inf REQUIRED)

include_directories(include)

add_library(init_component SHARED src/init_component.cpp)
target_compile_definitions(init_component PRIVATE "COMPOSITION_BUILDING_DLL")
ament_target_dependencies(init_component
  "rclcpp"
  "rclcpp_components"
  "dynamixel_sdk"
  "dynamixel_sdk_inf")
rclcpp_components_register_nodes(init_component "motor_setup::SetupDynamixel")
set(node_plugins "${node_plugins}motor_setup::SetupDynamixel;$<TARGET_FILE:init_component>\n")

install(TARGETS
  init_component
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)

# Install launch files.
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
