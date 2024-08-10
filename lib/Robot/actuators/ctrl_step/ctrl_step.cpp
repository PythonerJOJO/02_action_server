#include "ctrl_step.hpp"
/**
 * @brief Construct a new Ctrl Step Motor:: Ctrl Step Motor object
 * @param _id               电机 ID
 * @param _inverse          是否反向
 * @param _reduction        减速比
 * @param _angleLimitMin    最小角度限制
 * @param _angleLimitMax    最大角度限制
 * @note
 */

void CtrlStepMotor::SetAngle(float _angle)
{
    _angle = inverseDirection ? -_angle : _angle;
    float stepMotorCnt = _angle / 360.0f * (float)reduction;
    SetPositionSetPoint(stepMotorCnt);
}

void CtrlStepMotor::SetPositionSetPoint(float _val)
{
    uint8_t mode = 0x05;

    // Float to Bytes
    auto *b = (unsigned char *)&_val;
    for (int i = 0; i < 4; i++)
        canBuf[i] = *(b + i);
    canBuf[4] = 1; // Need ACK
    _canPort.canSend(nodeID, mode, canBuf, 4);
}

void CtrlStepMotor::SetAngleWithVelocityLimit(float _angle, float _vel)
{
    _angle = inverseDirection ? -_angle : _angle;
    float stepMotorCnt = _angle / 360.0f * (float)reduction;
    SetPositionWithVelocityLimit(stepMotorCnt, _vel);
}
void CtrlStepMotor::SetPositionWithVelocityLimit(float _pos, float _vel)
{
    uint8_t mode = 0x07;

    // Float to Bytes
    auto *b = (unsigned char *)&_pos;
    for (int i = 0; i < 4; i++)
        canBuf[i] = *(b + i);
    b = (unsigned char *)&_vel;
    for (int i = 4; i < 8; i++)
        canBuf[i] = *(b + i - 4);

    _canPort.canSend(nodeID, mode, canBuf, 8);
}

void CtrlStepMotor::SetEnable(bool _enable)
{
    state = _enable ? FINISH : STOP;

    uint8_t mode = 0x01;

    // Int to Bytes
    uint32_t val = _enable ? 1 : 0;
    auto *b = (unsigned char *)&val;
    for (int i = 0; i < 4; i++)
        canBuf[i] = *(b + i);

    bool sendVail = _canPort.canSend(nodeID, mode, canBuf, 4);
    sendVail ? printf("sendVail\n") : printf("sendFail\n");
}