#include "AnimNotifyState_MoveToFirstPoint.h"

UAnimNotifyState_MoveToFirstPoint::UAnimNotifyState_MoveToFirstPoint() {
    this->m_RightOffset = 0.00f;
    this->m_HeightOffset = 0.00f;
    this->m_distanceOffset = 0.00f;
    this->m_entering = false;
    this->m_Overtime = 0.00f;
    this->m_MoveTo = ETraverseMoveToPoint::FirstPoint;
}


