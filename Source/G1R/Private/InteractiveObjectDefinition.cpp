#include "InteractiveObjectDefinition.h"
#include "Templates/SubclassOf.h"

UInteractiveObjectDefinition::UInteractiveObjectDefinition() {
    this->m_ObjectInteractAngle = 0.00f;
    this->m_PlayerInteractAngle = 180.00f;
    this->m_PlayerInteractZDistance = 110.00f;
    this->m_PlayerInteractDistance = 200.00f;
    this->m_PlayerInteractDistanceFar = 400.00f;
    this->m_PlayerDetectDistance = 0.00f;
    this->m_UsableByPlayer = true;
    this->m_AddNPCInteractionSpots = true;
    this->m_OptionalObject = NULL;
    this->m_ShouldShowNameIngame = false;
    this->m_ConsumeKeys = false;
    this->m_CameraTarget = EInteractiveCameraTarget::Default;
    this->m_MustMove = false;
    this->m_StartBeforeRotation = false;
    this->m_Priority = 1;
    this->m_MinimalAction = false;
}

void UInteractiveObjectDefinition::MyCustomRPC_Implementation(AActor* OtherActor, bool IsBegin) {
}

FGameplayTag UInteractiveObjectDefinition::GetDefaultInteraction() const {
    return FGameplayTag{};
}

FGameplayTagContainer UInteractiveObjectDefinition::GetAdditionalInteractions() const {
    return FGameplayTagContainer{};
}

UItemEffectDefinition* UInteractiveObjectDefinition::AddEffect(FGameplayTag Name, TSubclassOf<UGameplayEffect> effectToAdd) {
    return NULL;
}


