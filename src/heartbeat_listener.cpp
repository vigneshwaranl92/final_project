#include "../include/heartbeat_listener.h"

int main(int argc, char **argv ) {
  ros::init(argc, argv, "hb_listener");
  ros::NodeHandle n;
  timer = n.createTimer(ros::Rate(100), &timerCallback, false, false);
  ros::Subscriber sub = n.subscribe("heartbeat", 1000, &beatCallback);

  ros::spin();

  return 0;
}
