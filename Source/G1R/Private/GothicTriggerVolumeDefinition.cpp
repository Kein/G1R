#include "GothicTriggerVolumeDefinition.h"

UGothicTriggerVolumeDefinition::UGothicTriggerVolumeDefinition() {
    this->m_MustTick = false;
    this->m_OnlyPlayer = true;
}

void UGothicTriggerVolumeDefinition::BP_Tick_Implementation(AGothicCharacter* Character, AGothicTriggerVolume* Trigger, float DeltaTime) {
}

bool UGothicTriggerVolumeDefinition::BP_MustDisableTrigger_Implementation(AGothicTriggerVolume* Trigger) {
    return false;
}

void UGothicTriggerVolumeDefinition::BP_LeaveTrigger_Implementation(AGothicCharacter* Character, AGothicTriggerVolume* Trigger) {
}

void UGothicTriggerVolumeDefinition::BP_ExecuteTrigger_Implementation(AGothicCharacter* Character, AGothicTriggerVolume* Trigger) {
}

bool UGothicTriggerVolumeDefinition::BP_CanTrigger_Implementation(AGothicCharacter* Character, AGothicTriggerVolume* Trigger) {
    return false;
}


