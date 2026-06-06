#include "GothicTriggerVolume.h"
#include "Templates/SubclassOf.h"

AGothicTriggerVolume::AGothicTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_VolumeDefinition = NULL;
    this->m_Subsystem = NULL;
    this->m_MustTick = false;
    this->m_IsInside = true;
    this->m_Player = NULL;
}

void AGothicTriggerVolume::Tick(float DeltaTime) {
}

void AGothicTriggerVolume::Server_DamageAndEvent_Implementation(AGothicCharacter* Character, TSubclassOf<UWeaponDefinition> Weapon, FGameplayTag verb, FName instigatorName, FName EventName, float NewValue) {
}

void AGothicTriggerVolume::SaveData(const FString& DataName, float Value) const {
}

void AGothicTriggerVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGothicTriggerVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGothicTriggerVolume::Multicast_DamageAndEvent_Implementation(AGothicCharacter* Character, TSubclassOf<UWeaponDefinition> Weapon, FGameplayTag verb, FName instigatorName, FName EventName, float NewValue) {
}

bool AGothicTriggerVolume::IsDoorOpen(const UObject* WorldContextObject, const FName DoorName) {
    return false;
}

float AGothicTriggerVolume::GetDataGlobalData(const FString& DataName) const {
    return 0.0f;
}

float AGothicTriggerVolume::GetData(const FString& DataName) const {
    return 0.0f;
}

void AGothicTriggerVolume::DamageAndEvent(AGothicCharacter* Character, TSubclassOf<UWeaponDefinition> Weapon, FGameplayTag verb, FName instigatorName, FName EventName, float NewValue) {
}

bool AGothicTriggerVolume::BP_IsPlayer(AGothicCharacter* Character) const {
    return false;
}

bool AGothicTriggerVolume::BP_HasCharacter(FName UniqueName) const {
    return false;
}


