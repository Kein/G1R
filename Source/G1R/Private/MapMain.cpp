#include "MapMain.h"

UMapMain::UMapMain() {
    this->Map_World = NULL;
    this->Map_Area = NULL;
    this->GameTimeSubsystem = NULL;
    this->InputHint_Marker_RemoveAll = NULL;
    this->m_MapData = NULL;
}




bool UMapMain::OpenAreaMap(FGameplayTag TagMap) {
    return false;
}

bool UMapMain::IsAreaUnlocked(const FGameplayTag AreaTag) const {
    return false;
}



