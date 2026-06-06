#include "GothicSmartLinkComponentFly.h"

UGothicSmartLinkComponentFly::UGothicSmartLinkComponentFly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddToWaynet = false;
    this->ChangePathfollowSettingsTask = NULL;
}


