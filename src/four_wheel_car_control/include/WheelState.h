class WheelState
{
private:
    float angle;    //规定正前方为0，逆时针半周为+PIE/2
    float velocity; //规定向前为正，单位待定

public:
    WheelState(float angle_, float velocity_);
    WheelState();
    ~WheelState();
    float getAngle();
    float getVelocity();
    void setAngel(float angel_);
    void setVelocity(float vel_);
};
