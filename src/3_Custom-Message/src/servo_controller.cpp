// TODO: implementasi servo_controller.cpp

const int MID_YAW = 2048;
const int MID_PITCH = 2048;

const int MAX_YAW = 2300;
const int MIN_YAW = 1300;
const int MAX_PITCH = 3068;
const int MIN_PITCH = 1024;

#include "servo_controller.hpp"

ServoController::ServoController() {

    servo_sub = nh.subscribe("servo_topic", 1, &ServoController::ServoCallback, this);
    
}

void ServoController::ServoCallback(const custom_message::Servo::ConstPtr& msg) {

    // if (MID_YAW + msg->yaw > MAX_YAW) {

    //     ROS_INFO("YAW = %d", MAX_YAW);

    // } else if (MID_YAW + msg->yaw < MIN_YAW) {

    //     ROS_INFO("YAW = %d", MIN_YAW);

    // } else {

    //     ROS_INFO("YAW = %d", MID_YAW + msg->yaw);

    // }

    ROS_INFO("YAW1 = %d", MID_YAW + msg->yaw);

    // if (MID_PITCH + msg->pitch > MAX_PITCH) {

    //     ROS_INFO("PITCH = %d", MAX_PITCH);

    // } else if (MID_PITCH + msg->pitch < MIN_PITCH) {

    //     ROS_INFO("PITCH = %d", MIN_PITCH);

    // } else {

    //     ROS_INFO("PITCH = %d", MID_PITCH + msg->pitch);

    // }

    ROS_INFO("PITCH1 = %d", MID_PITCH + msg->pitch);

}

int main(int argc, char **argv){

    ros::init(argc, argv, "servo_controller_node");

    ServoController sc;

    ros::spin();

    return 0;
    
}

// DOKUMENTASI
// Buka terminal baru, lalu masuk directory:
// cd <directory>
// Compile:
// catkin_make
// source devel/setup.bash
// Menjalankan program:
// rosrun custom_message servo_controller_node 
// [ INFO] [1625550478.906717132]: YAW1 = 2048
// [ INFO] [1625550478.906815137]: PITCH1 = 2048
// [ INFO] [1625550478.923219192]: YAW1 = 2048
// [ INFO] [1625550478.923312251]: PITCH1 = 2048
// [ INFO] [1625550478.939968186]: YAW1 = 2048
// [ INFO] [1625550478.940068276]: PITCH1 = 2048
// [ INFO] [1625550478.956592621]: YAW1 = 2048
// [ INFO] [1625550478.956690170]: PITCH1 = 2048
// [ INFO] [1625550478.973379691]: YAW1 = 2048
// [ INFO] [1625550478.973478879]: PITCH1 = 2048
// [ INFO] [1625550478.990047894]: YAW1 = 2048
// [ INFO] [1625550478.990148254]: PITCH1 = 2048
// [ INFO] [1625550479.006712851]: YAW1 = 2048
// [ INFO] [1625550479.006813968]: PITCH1 = 2048
// [ INFO] [1625550479.023333453]: YAW1 = 2048
// [ INFO] [1625550479.023463088]: PITCH1 = 2048
// [ INFO] [1625550479.040074076]: YAW1 = 2048
// [ INFO] [1625550479.040173539]: PITCH1 = 2048
// [ INFO] [1625550479.056668798]: YAW1 = 2048
// [ INFO] [1625550479.056774210]: PITCH1 = 2048
// [ INFO] [1625550479.073312751]: YAW1 = 2048
// [ INFO] [1625550479.073452535]: PITCH1 = 2048
// [ INFO] [1625550479.090045293]: YAW1 = 2048
// [ INFO] [1625550479.090143814]: PITCH1 = 2048
// [ INFO] [1625550479.106649156]: YAW1 = 2048
// [ INFO] [1625550479.106764420]: PITCH1 = 2048
// [ INFO] [1625550479.123412021]: YAW1 = 2048
// [ INFO] [1625550479.123508457]: PITCH1 = 2048
// [ INFO] [1625550479.139940389]: YAW1 = 2048
// [ INFO] [1625550479.140029700]: PITCH1 = 2048
// [ INFO] [1625550479.156663049]: YAW1 = 2048
// [ INFO] [1625550479.156759485]: PITCH1 = 2048
// [ INFO] [1625550479.173215772]: YAW1 = 2048
// [ INFO] [1625550479.173307047]: PITCH1 = 2048
// [ INFO] [1625550479.190037659]: YAW1 = 2048
// [ INFO] [1625550479.190136255]: PITCH1 = 2048
// [ INFO] [1625550479.206602294]: YAW1 = 2048
// [ INFO] [1625550479.206697593]: PITCH1 = 2048
// [ INFO] [1625550479.223391608]: YAW1 = 2048
// [ INFO] [1625550479.223488896]: PITCH1 = 2048
// [ INFO] [1625550479.240045799]: YAW1 = 2048
// [ INFO] [1625550479.240143183]: PITCH1 = 2048
// [ INFO] [1625550479.256668339]: YAW1 = 2048
// [ INFO] [1625550479.256766244]: PITCH1 = 2048
// [ INFO] [1625550479.273378515]: YAW1 = 2048
// [ INFO] [1625550479.273478615]: PITCH1 = 2048
// [ INFO] [1625550479.290085535]: YAW1 = 2048
// [ INFO] [1625550479.290186787]: PITCH1 = 2048
// [ INFO] [1625550479.306712269]: YAW1 = 2048
// [ INFO] [1625550479.306813541]: PITCH1 = 2048
// [ INFO] [1625550479.323316568]: YAW1 = 2048
// [ INFO] [1625550479.323452548]: PITCH1 = 2048
// [ INFO] [1625550479.340050573]: YAW1 = 1556
// [ INFO] [1625550479.340155433]: PITCH1 = 1248
// [ INFO] [1625550479.356635864]: YAW1 = 1556
// [ INFO] [1625550479.356732977]: PITCH1 = 1248
// [ INFO] [1625550479.373369909]: YAW1 = 1556
// [ INFO] [1625550479.373469212]: PITCH1 = 1248
// [ INFO] [1625550479.389912470]: YAW1 = 1556
// [ INFO] [1625550479.390003534]: PITCH1 = 1248
// [ INFO] [1625550479.406753359]: YAW1 = 1556
// [ INFO] [1625550479.406854657]: PITCH1 = 1248
// [ INFO] [1625550479.423208484]: YAW1 = 1556
// [ INFO] [1625550479.423299854]: PITCH1 = 1248
// [ INFO] [1625550479.440099736]: YAW1 = 1556
// [ INFO] [1625550479.440195136]: PITCH1 = 1248
// [ INFO] [1625550479.456585364]: YAW1 = 1556
// [ INFO] [1625550479.456680247]: PITCH1 = 1248
// [ INFO] [1625550479.473372909]: YAW1 = 1556
// [ INFO] [1625550479.473472994]: PITCH1 = 1248
// [ INFO] [1625550479.490030558]: YAW1 = 1556
// [ INFO] [1625550479.490134922]: PITCH1 = 1248
// [ INFO] [1625550479.506670647]: YAW1 = 1556
// [ INFO] [1625550479.506768862]: PITCH1 = 1248
// [ INFO] [1625550479.523403083]: YAW1 = 1556
// [ INFO] [1625550479.523507849]: PITCH1 = 1248
// [ INFO] [1625550479.540078176]: YAW1 = 1556
// [ INFO] [1625550479.540177579]: PITCH1 = 1248
// [ INFO] [1625550479.556669120]: YAW1 = 1556
// [ INFO] [1625550479.556769561]: PITCH1 = 1248
// [ INFO] [1625550479.573341417]: YAW1 = 1556
// [ INFO] [1625550479.573442458]: PITCH1 = 1248
// [ INFO] [1625550479.589989959]: YAW1 = 1556
// [ INFO] [1625550479.590079067]: PITCH1 = 1248
// [ INFO] [1625550479.606646516]: YAW1 = 1556
// [ INFO] [1625550479.606743479]: PITCH1 = 1248
// [ INFO] [1625550479.623272637]: YAW1 = 1556
// [ INFO] [1625550479.623354180]: PITCH1 = 1248
// [ INFO] [1625550479.639884921]: YAW1 = 1556
// [ INFO] [1625550479.639966800]: PITCH1 = 1248
// [ INFO] [1625550479.656657247]: YAW1 = 1556
// [ INFO] [1625550479.656755938]: PITCH1 = 1248
// [ INFO] [1625550479.673224738]: YAW1 = 1556
// [ INFO] [1625550479.673313858]: PITCH1 = 1248
// [ INFO] [1625550479.689973376]: YAW1 = 1556
// [ INFO] [1625550479.690068665]: PITCH1 = 1248
// [ INFO] [1625550479.706564270]: YAW1 = 1556
// [ INFO] [1625550479.706661874]: PITCH1 = 1248
// [ INFO] [1625550479.723357207]: YAW1 = 1556
// [ INFO] [1625550479.723495948]: PITCH1 = 1248
// [ INFO] [1625550479.740048130]: YAW1 = 1556
// [ INFO] [1625550479.740146591]: PITCH1 = 1248
// [ INFO] [1625550479.756651677]: YAW1 = 1556
// [ INFO] [1625550479.756752113]: PITCH1 = 1248
// [ INFO] [1625550479.773333225]: YAW1 = 1556
// [ INFO] [1625550479.773430724]: PITCH1 = 1248
// [ INFO] [1625550479.789965106]: YAW1 = 1556
// [ INFO] [1625550479.790064188]: PITCH1 = 1248
// [ INFO] [1625550479.806685069]: YAW1 = 1556
// [ INFO] [1625550479.806784512]: PITCH1 = 1248
// [ INFO] [1625550479.823325374]: YAW1 = 1556
// [ INFO] [1625550479.823480196]: PITCH1 = 1248
// [ INFO] [1625550479.839992794]: YAW1 = 1556
// [ INFO] [1625550479.840093811]: PITCH1 = 1248
// [ INFO] [1625550479.856622490]: YAW1 = 1556
// [ INFO] [1625550479.856721086]: PITCH1 = 1248
// [ INFO] [1625550479.873374300]: YAW1 = 1556
// [ INFO] [1625550479.873476249]: PITCH1 = 1248
// [ INFO] [1625550479.889862458]: YAW1 = 1556
// [ INFO] [1625550479.889952075]: PITCH1 = 1248
// [ INFO] [1625550479.906691547]: YAW1 = 1556
// [ INFO] [1625550479.906791210]: PITCH1 = 1248
// [ INFO] [1625550479.923181223]: YAW1 = 1556
// [ INFO] [1625550479.923269015]: PITCH1 = 1248
// [ INFO] [1625550479.939999743]: YAW1 = 1556
// [ INFO] [1625550479.940094115]: PITCH1 = 1248
// [ INFO] [1625550479.956536255]: YAW1 = 1556
// [ INFO] [1625550479.956763806]: PITCH1 = 1248
// [ INFO] [1625550479.973323980]: YAW1 = 1556
// [ INFO] [1625550479.973437535]: PITCH1 = 1248
// [ INFO] [1625550479.989987176]: YAW1 = 1556
// [ INFO] [1625550479.990086424]: PITCH1 = 1248
// [ INFO] [1625550480.006483843]: YAW1 = 1556
// [ INFO] [1625550480.006559551]: PITCH1 = 1248
// [ INFO] [1625550480.023117178]: YAW1 = 1556
// [ INFO] [1625550480.023179825]: PITCH1 = 1248
// [ INFO] [1625550480.039878147]: YAW1 = 1556
// [ INFO] [1625550480.039952678]: PITCH1 = 1248
// [ INFO] [1625550480.056460230]: YAW1 = 1556
// [ INFO] [1625550480.056533747]: PITCH1 = 1248
// [ INFO] [1625550480.073170330]: YAW1 = 1556
// [ INFO] [1625550480.073252935]: PITCH1 = 1248