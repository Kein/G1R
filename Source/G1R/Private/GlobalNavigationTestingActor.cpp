#include "GlobalNavigationTestingActor.h"

AGlobalNavigationTestingActor::AGlobalNavigationTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathfindingType = EFindPathType::WaynetOnly;
    this->NavigationConfig = NULL;
}


