#ifndef HEARTBEAT_LISTENER_H
#define HEARTBEAT_LISTENER_H

#include <ros/ros.h>
#include <std_msgs/Bool.h>



ros::Time start_time;
std_msgs::Bool beat;
ros::Timer Timer;
double value=10;



void beatCallback(const std_msgs::Bool::ConstPtr& msg) {
  ROS_INFO_STREAM("I've got msg");

  if (beat.data =true) {
    start_time = ros::Time::now();
    Timer.start();
  }
}

void timerCallback(const ros::TimerEvent& e) {
  ROS_INFO_STREAM("Itim");
  ros::Duration time_elapsed = ros::Time::now() - start_time;

  if (time_elapsed.toSec() > 1.0)
    ROS_INFO_STREAM("NO HEARTBEAT FOR" << time_elapsed.toSec());
}

#endif // HEARTBEAT_LISTENER_H
