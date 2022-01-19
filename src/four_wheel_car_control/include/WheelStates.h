#include <array>
#include <geometry_msgs/Twist.h>
#include "WheelState.h"

class WheelStates
{
private:
    std::array<WheelState, 4> states;//states[0]:左前 states[1]:右前 states[2]:左后 states[3]:右后

public:
    void update(geometry_msgs::Twist vel);

    std::array<WheelState, 4> getStates();
};
