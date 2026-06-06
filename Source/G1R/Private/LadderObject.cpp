#include "LadderObject.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "CustomNavCollisionStaticMeshComponent.h"
#include "GothicSmartLinkComponentFly.h"
#include "GothicSmartLinkComponentInteractionSpot.h"
#include "InteractiveObjectAnchorComponent.h"

ALadderObject::ALadderObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LadderStepSeparation = 0.00f;
    this->m_LadderStepHeight = 0.00f;
    this->m_LadderStepCount = 0;
    this->m_MinStepCount = 7;
    this->m_NavSupportSurfaceTop = CreateDefaultSubobject<UCustomNavCollisionStaticMeshComponent>(TEXT("ColliderTop"));
    this->m_LadderBottomPoint = CreateDefaultSubobject<UInteractiveObjectAnchorComponent>(TEXT("LadderBottomPoint"));
    this->m_LadderTopPoint = CreateDefaultSubobject<UInteractiveObjectAnchorComponent>(TEXT("LadderTopPoint"));
    this->m_LadderMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("LadderMesh"));
    this->m_DrawAlways = false;
    this->m_LadderDrawDebug = ELadderDrawDebug::Lines;
    this->m_NavLinkLadder = CreateDefaultSubobject<UGothicSmartLinkComponentInteractionSpot>(TEXT("LadderNavLink"));
    this->m_NavLinkFlying = CreateDefaultSubobject<UGothicSmartLinkComponentFly>(TEXT("FlyingNavLink"));
    this->m_LadderBottomPoint->SetupAttachment(RootComponent);
    this->m_LadderMesh->SetupAttachment(RootComponent);
    this->m_LadderTopPoint->SetupAttachment(RootComponent);
    this->m_NavSupportSurfaceTop->SetupAttachment(RootComponent);
}

void ALadderObject::BuildLadder() {
}


