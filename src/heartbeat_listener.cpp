#include "../include/heartbeat_listener.h"


int main(int argc, char **argv ){
  ros::init(argc, argv, "hb_listener");
  ros::NodeHandle n;




 ros::Subscriber sub = n.subscribe("heartbeat", 1000, &beatCallback);
 ros::Timer Timer = n.createTimer(ros::Duration(value), &timerCallback, false);
  ros::spin();

  return 0;

}


