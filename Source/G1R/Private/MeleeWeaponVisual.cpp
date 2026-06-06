#include "MeleeWeaponVisual.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GothicWeaponBloodComponent.h"

AMeleeWeaponVisual::AMeleeWeaponVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->m_MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->m_WeaponMatInst = NULL;
    this->m_WeaponBlood = CreateDefaultSubobject<UGothicWeaponBloodComponent>(TEXT("BloodComp"));
    this->m_ItemRequiredForStateA = NULL;
    this->m_MeshComp->SetupAttachment(RootComponent);
}

void AMeleeWeaponVisual::OnDamageDealt(AGothicCharacter* Target, float relativeDamage) {
}



