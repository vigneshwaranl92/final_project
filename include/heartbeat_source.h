#ifndef HEARTBEAT_SOURCE_H
#define HEARTBEAT_SOURCE_H

#include <ros/ros.h>
#include <std_msgs/Bool.h>

ros::Publisher chatter_pub;

void timerCallback(const ros::TimerEvent&) {
  std_msgs::Bool beat;
  beat.data = true;
  chatter_pub.publish(beat);
}

#endif // HEARTBEAT_SOURCE_H
