#include "ros/ros.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "testqt");
  ros::NodeHandle nh;

  ros::Rate LoopRate(1);

  while (ros::ok())
  {
    ROS_INFO("Hello ROS");
    ros::spinOnce();
    LoopRate.sleep();
  }

  return 0;
}
