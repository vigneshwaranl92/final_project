#include "../include/heartbeat_source.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "hb_source");
  ros::NodeHandle n;
  chatter_pub = n.advertise<std_msgs::Bool>("heartbeat", 1000);

  ros::Timer timer = n.createTimer(ros::Duration(1.0), timerCallback);

  ros::spin();

  return 0;
}
