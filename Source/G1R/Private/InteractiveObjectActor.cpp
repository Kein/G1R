#include "InteractiveObjectActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DataModuleComponent.h"
#include "InteractiveComponent.h"
#include "InteractiveObjectAnchorComponent.h"

AInteractiveObjectActor::AInteractiveObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    this->bReplicateUsingRegisteredSubObjectList = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->m_ItemDefinition = NULL;
    this->m_MustAlwaysTick = false;
    this->bCreateDefaultCameraComponent = true;
    this->bCreateDefaultStaticMeshComponent = true;
    this->bCreateDefaultSkeletalMeshComponent = true;
    this->bCreateDefaultAnchorComponent = true;
    this->bCreateDefaultUINamePositionComponent = true;
    this->m_InteractiveObjectDefinition = NULL;
    this->m_SceneComponent = (USceneComponent*)RootComponent;
    this->m_SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
    this->m_MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->m_InteractiveComponent = CreateDefaultSubobject<UInteractiveComponent>(TEXT("InteractiveComponent"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->m_BaseAnchorComponent = CreateDefaultSubobject<UInteractiveObjectAnchorComponent>(TEXT("arrow"));
    this->m_DataModuleComponent = CreateDefaultSubobject<UDataModuleComponent>(TEXT("DataModuleComponent"));
    this->m_UseActionTagsForInteractObject = false;
    this->m_InheritOwnershipFromArea = false;
    this->m_OverrideOwnership = false;
    this->m_bHasMigratedDataFromFreepointConfig = false;
    this->m_HasMigratedDataFromFreepointConfig2 = 0;
    this->UINamePosition = CreateDefaultSubobject<USphereComponent>(TEXT("UINamePosition"));
    this->CameraComponent->SetupAttachment(RootComponent);
    this->UINamePosition->SetupAttachment(RootComponent);
    this->m_BaseAnchorComponent->SetupAttachment(RootComponent);
    this->m_InteractiveComponent->SetupAttachment(RootComponent);
    this->m_MeshComponent->SetupAttachment(RootComponent);
    this->m_SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AInteractiveObjectActor::SetIsBeingUsed(bool Value) {
}

void AInteractiveObjectActor::Server_PlayInteractMontage_Implementation(UAnimMontage* AnimMontage, bool Finish) {
}

void AInteractiveObjectActor::Multicast_StopInteractMontage_Implementation() const {
}

void AInteractiveObjectActor::Multicast_SetNextSectionOfInteractMontage_Implementation(FName ToSectionName, UAnimMontage* AnimMontage) const {
}

void AInteractiveObjectActor::Multicast_SetDataInt_Implementation(const FGameplayTag DataName, const int32 InData) {
}

void AInteractiveObjectActor::Multicast_ReplaceNextSectionOfInteractMontage_Implementation(FName changeNextOf, FName ToSectionName, UAnimMontage* AnimMontage) const {
}

void AInteractiveObjectActor::Multicast_PlayInteractMontage_Implementation(UAnimMontage* AnimMontage, bool Finish) {
}

void AInteractiveObjectActor::Multicast_JumpSectionInteractMontage_Implementation(FName SectionName, UAnimMontage* AnimMontage) const {
}

FGuid AInteractiveObjectActor::GetPersistentId() const {
    return FGuid{};
}

UInteractiveObjectDefinition* AInteractiveObjectActor::GetInteractiveObjectDefinition() const {
    return NULL;
}

UInteractiveComponent* AInteractiveObjectActor::GetInteractiveComponent() const {
    return NULL;
}

UFireVisualComponent* AInteractiveObjectActor::GetFireComponent() const {
    return NULL;
}

UAnimInstance* AInteractiveObjectActor::GetAnimInstance() {
    return NULL;
}

FCharacterUniqueName AInteractiveObjectActor::FindCharacter(FName CharacterUniqueName) const {
    return FCharacterUniqueName{};
}





