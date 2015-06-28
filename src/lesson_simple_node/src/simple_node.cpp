/**
 ** Simple node by Rae Jeong 2015-06-14
 **/
#include <ros/ros.h>

int main(int argc, char* argv[])
{
  // ROS initialization
  ros::init(argc, argv, "simple_node");

  // Create a ROS node handler
  ros::NodeHandle node;

  // Setting the rate of a loop, in this case the frequency of printing out our message
  ros::Rate loop_rate(1.0);

  // Counter for the loop
  int count = 0;

  // Loop until ROS kill
  while(ros::ok()) {
    // Print out a message
    ROS_INFO_STREAM("We've gone through " << count << " times.");
    ++count;
    // Wait for the loop rate duration
    loop_rate.sleep();
  }

  // Exit program.
  return 0;
}
