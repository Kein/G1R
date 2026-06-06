#include "CapsuleNavObstacleComponent.h"
#include "NavAreas/NavArea_Null.h"

UCapsuleNavObstacleComponent::UCapsuleNavObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
    this->bDynamicObstacle = true;
    this->AreaClassOverride = UNavArea_Null::StaticClass();
    this->bUseSystemDefaultObstacleAreaClass = false;
}


