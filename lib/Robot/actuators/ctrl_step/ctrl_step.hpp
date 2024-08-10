#include <stdint.h>
#include <communications/can_port.hpp>

class CtrlStepMotor : public CanPort
{
private:
    uint8_t canBuf[8] = {};
    uint8_t _cmd;
    CanPort &_canPort;

public:
    enum State
    {
        RUNNING,
        FINISH,
        STOP
    };

    const uint32_t CTRL_CIRCLE_COUNT = 200 * 256;

    CtrlStepMotor(uint8_t _id, bool _inverse = false, uint8_t _reduction = 1,
                  float _angleLimitMin = -180, float _angleLimitMax = 180) : CanPort(_canPort), _canPort(_canPort)
    {
        this->nodeID = _id;
        this->inverseDirection = _inverse;
        this->reduction = _reduction;
        this->angleLimitMin = _angleLimitMin;
        this->angleLimitMax = _angleLimitMax;
    }

    uint8_t nodeID;
    float angle = 0;
    float angleLimitMax;
    float angleLimitMin;
    uint32_t temperature = 0.0;
    bool inverseDirection;
    uint8_t reduction;
    State state = STOP;

    void SetAngle(float _angle);
    void SetAngleWithVelocityLimit(float _angle, float _vel);
    // CAN Command
    void SetEnable(bool _enable);
    void SetEnableTemp(bool _enable);
    void DoCalibration();
    void SetCurrentSetPoint(float _val);
    void SetVelocitySetPoint(float _val);
    void SetPositionSetPoint(float _val);
    void SetPositionWithVelocityLimit(float _pos, float _vel);
    void SetNodeID(uint32_t _id);
    void SetCurrentLimit(float _val);
    void SetVelocityLimit(float _val);
    void SetAcceleration(float _val);
    void SetDceKp(int32_t _val);
    void SetDceKv(int32_t _val);
    void SetDceKi(int32_t _val);
    void SetDceKd(int32_t _val);
    void ApplyPositionAsHome();
    void SetEnableOnBoot(bool _enable);
    void SetEnableStallProtect(bool _enable);
    void Reboot();
    uint32_t GetTemp();
    void EraseConfigs();
    void UpdateAngle();
    void UpdateAngleCallback(float _pos, bool _isFinished);
};