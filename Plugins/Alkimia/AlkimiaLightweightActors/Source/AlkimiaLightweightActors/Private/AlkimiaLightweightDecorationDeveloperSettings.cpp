#include "AlkimiaLightweightDecorationDeveloperSettings.h"

UAlkimiaLightweightDecorationDeveloperSettings::UAlkimiaLightweightDecorationDeveloperSettings() {
    this->bAllowLightweightReplacementsInEditor = false;
    this->bAllowLightweightReplacementsOnCook = true;
    this->LightweightificationNumActorThreshold = 1;
    this->LightweightificationSubcellSplitThreshold = 1000;
    this->LightweightificationSubcellSize = 1024;
}


