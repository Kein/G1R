#include "BloodPuzzleSwitchBase_Component.h"

UBloodPuzzleSwitchBase_Component::UBloodPuzzleSwitchBase_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FillTankPosition = 0;
    this->FillExitPosition = 0;
    this->IsBeingFilled = false;
    this->IsFilled = false;
    this->m_InteractiveObjectActor = NULL;
}


