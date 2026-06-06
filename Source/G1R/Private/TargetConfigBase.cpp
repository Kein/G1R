#include "TargetConfigBase.h"
#include "Templates/SubclassOf.h"

UTargetConfigBase::UTargetConfigBase() {
    this->m_TargetFilterClass = NULL;
    this->m_DetectionRadiusPlayer = 0.00f;
    this->m_DetectionRadiusAI = 0.00f;
    this->m_TargetCheckVisibilityRate = 0.25f;
    this->m_TargetLostTimeout = 1.00f;
    this->m_ShouldFindTargetOnVisualLost = true;
    this->m_ShouldFindTargetOnTargetDefeated = false;
    this->m_ShouldFindTargetOnTargetDie = true;
    this->m_ShouldFindTargetOnTargetCantBeTargeted = true;
    this->m_ShouldAimToTargetHeadOrChest = false;
    this->m_ShouldFilterTargetByRelationship = false;
}

bool UTargetConfigBase::IsValidTarget_Scriptable_Implementation(const USceneComponent* Comp, AActor* AvatarActor) const {
    return false;
}

bool UTargetConfigBase::IsValidTarget(const USceneComponent* Comp, AActor* AvatarActor) const {
    return false;
}

TSubclassOf<AActor> UTargetConfigBase::GetTargetFilterClass() const {
    return NULL;
}

USceneComponent* UTargetConfigBase::GetAccurateTargetComponentOnCurrentTarget_Scriptable_Implementation(USceneComponent* TargetComponent) {
    return NULL;
}

void UTargetConfigBase::FilterTargetByRelationship_Scriptable_Implementation(AGothicCharacter* OwnerCharacter, TArray<USceneComponent*>& Targets) {
}

bool UTargetConfigBase::CheckVisibility_Scriptable_Implementation(const USceneComponent* Target, AActor* AvatarActor) const {
    return false;
}

bool UTargetConfigBase::CheckVisibility(const USceneComponent* Target, AActor* AvatarActor) const {
    return false;
}

bool UTargetConfigBase::CheckCharacterVisualInterruption_Scriptable_Implementation(const USceneComponent* Target, AActor* AvatarActor) const {
    return false;
}

bool UTargetConfigBase::CheckCharacterVisualInterruption(const USceneComponent* Target, AActor* AvatarActor) const {
    return false;
}


