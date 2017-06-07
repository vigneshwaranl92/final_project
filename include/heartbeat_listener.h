#ifndef HEARTBEAT_LISTENER_H
#define HEARTBEAT_LISTENER_H

#include <ros/ros.h>
#include <std_msgs/Bool.h>

void timerCallback(const std_msgs::Bool::ConstPtr& msg) {
  ROS_INFO("I heard");
}

#endif // HEARTBEAT_LISTENER_H
