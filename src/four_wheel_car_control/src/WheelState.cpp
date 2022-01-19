#include"WheelState.h"

WheelState::WheelState(float angle_, float velocity_)
{
    angle = angle_;
    velocity = velocity_;
}
WheelState::WheelState() : WheelState(0.0, 0.0) {}

WheelState::~WheelState() {}

float WheelState::getAngle(){
    return angle;
}
float WheelState::getVelocity(){
    return velocity;
}
void WheelState::setAngel(float angle_){
    angle = angle_;
}
void WheelState::setVelocity(float vel_){
    velocity=vel_;
}