#include "WheelStates.h"
#include <cmath>
#include "CarInfo.h"

std::array<WheelState, 4> WheelStates::getStates()
{
    return states;
}

void WheelStates::update(geometry_msgs::Twist vel)
{
    CarInfo carInfo;
    float velLine = vel.linear.x;
    float velAngel = vel.angular.z;
    float rad = velLine / velAngel;
    float radLeft = sqrtf(powf(rad - carInfo.trackWidth / 2, 2) + powf(carInfo.disFrontBackWheel / 2, 2));
    float radRight = sqrtf(powf(rad - carInfo.trackWidth / 2, 2) + powf(carInfo.disFrontBackWheel / 2, 2));
    states[0].setVelocity(velAngel * radLeft);
    states[0].setAngel(atan2f((carInfo.disFrontBackWheel / 2), (rad - carInfo.trackWidth / 2)));
    states[1].setVelocity(velAngel * radRight);
    states[1].setAngel(atan2f((carInfo.disFrontBackWheel / 2), (rad + carInfo.trackWidth / 2)));
    states[2].setVelocity(states[0].getVelocity());
    states[2].setAngel(-states[0].getAngle());
    states[3].setVelocity(states[1].getVelocity());
    states[3].setAngel(-states[1].getAngle());
}