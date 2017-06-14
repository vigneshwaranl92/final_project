#ifndef HEARTBEAT_LISTENER_H
#define HEARTBEAT_LISTENER_H

#include <ros/ros.h>
#include <std_msgs/Bool.h>

ros::Time start_time;
std_msgs::Bool beat;
ros::Timer timer;

void beatCallback(const std_msgs::Bool::ConstPtr& msg) {
  if (beat.data) {
    start_time = ros::Time::now();
    timer.start();
  }
}

void timerCallback(const ros::TimerEvent& e) {
  ros::Duration time_elapsed = ros::Time::now() - start_time;

  if (time_elapsed.toSec() > 1.0)
    ROS_INFO_STREAM("NO HEARTBEAT FOR" << time_elapsed.toSec());
}


#endif // HEARTBEAT_LISTENER_H
