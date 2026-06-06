#include "ArcheryWeaponVisual.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AArcheryWeaponVisual::AArcheryWeaponVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    this->m_MeshComp = (USkeletalMeshComponent*)RootComponent;
    this->m_ArrowNotched = NULL;
    this->m_HandleSocketName = TEXT("HandleSocket");
    this->m_StringSocketName = TEXT("StringSocket");
    this->m_HasArrowNotched = false;
}

void AArcheryWeaponVisual::OnItemAddedInMainContainer(const UItemDefinition* new_item, int32 Count) {
}

void AArcheryWeaponVisual::MulticastDetachArrow_Implementation(AArrowVisual* arrow) const {
}

void AArcheryWeaponVisual::MulticastAttachArrow_Implementation(AArrowVisual* arrow, const FName& SocketName) const {
}

bool AArcheryWeaponVisual::HasArrowNotched() const {
    return false;
}

void AArcheryWeaponVisual::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArcheryWeaponVisual, m_HasArrowNotched);
}


