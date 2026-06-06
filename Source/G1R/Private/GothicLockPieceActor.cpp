#include "GothicLockPieceActor.h"

AGothicLockPieceActor::AGothicLockPieceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->m_LockPieceType = EGothicLockPieceType::None;
    this->m_PieceId = 0;
    this->m_CanEverBeHighlighted = false;
    this->m_CanEverShake = false;
    this->m_MaterialInstanceDynamic = NULL;
    this->m_RuntimeRootComponent = NULL;
}


