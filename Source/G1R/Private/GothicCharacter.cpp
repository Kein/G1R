#include "GothicCharacter.h"
#include "Camera/CameraComponent.h"
#include "CharacterPerceptionComponent.h"
#include "FocalPointComponent.h"
#include "GothicAnimationComponent.h"
#include "GothicBloodComponent.h"
#include "GothicCameraSpringArmComponent.h"
#include "GothicCharacterCapsuleComponent.h"
#include "GothicCinematicActorComponent.h"
#include "GothicDirtComponent.h"
#include "GothicFXComponent.h"
#include "GothicFootstepsDataComponent.h"
#include "GothicMaterialsComponent.h"
#include "GothicMovementComponent.h"
#include "GothicSkeletalMeshComponent.h"
#include "GothicTimeDilationComponent.h"
#include "GothicWaterVolumeSensor.h"
#include "GothicWeatherComponent.h"
#include "HUDDisplayCombatMarkerPositionComponent.h"
#include "InteractiveComponent.h"
#include "MPSyncCharacterComponent.h"
#include "NPCHealthBarComponent.h"
#include "Net/UnrealNetwork.h"
#include "RagdollComponent.h"
#include "SubCapsuleManagerComponent.h"
#include "Templates/SubclassOf.h"
#include "WalkSpeedModifierComponent.h"

AGothicCharacter::AGothicCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGothicCharacterCapsuleComponent>(TEXT("CollisionCylinder")).SetDefaultSubobjectClass<UGothicSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UGothicMovementComponent>(TEXT("CharMoveComp"))) {
    this->bReplicateUsingRegisteredSubObjectList = true;
    this->bUseControllerRotationYaw = false;
    const FProperty* p_CapsuleComponent = GetClass()->FindPropertyByName("CapsuleComponent");
    (*p_CapsuleComponent->ContainerPtrToValuePtr<UCapsuleComponent*>(this)) = (UCapsuleComponent*)RootComponent;
    this->CurrentDebugWidgetComp = NULL;
    this->m_HealthBarComponent = CreateDefaultSubobject<UNPCHealthBarComponent>(TEXT("EnemyHealthBar"));
    this->m_HUDDisplayCombatMarkerPositionComponent = CreateDefaultSubobject<UHUDDisplayCombatMarkerPositionComponent>(TEXT("HUDCombatMarkerPosition"));
    this->m_RagdollComponent = CreateDefaultSubobject<URagdollComponent>(TEXT("RagdollComponent"));
    this->m_CarryComponent = NULL;
    this->m_MagicComponent = NULL;
    this->m_TimeDilationComponent = CreateDefaultSubobject<UGothicTimeDilationComponent>(TEXT("TimeDilationComponent"));
    this->m_GothicWaterVolumeSensor = CreateDefaultSubobject<UGothicWaterVolumeSensor>(TEXT("GothicWaterVolumeSensorComponent"));
    this->m_WalkSpeedModifierComponent = CreateDefaultSubobject<UWalkSpeedModifierComponent>(TEXT("WalkSpeedModifierComponent"));
    this->m_PerceptionComponent = CreateDefaultSubobject<UCharacterPerceptionComponent>(TEXT("CharacterPerceptionComponent"));
    this->m_SubCapsuleManagerComponent = CreateDefaultSubobject<USubCapsuleManagerComponent>(TEXT("SubCapsuleManagerComponent"));
    this->m_FXComponent = CreateDefaultSubobject<UGothicFXComponent>(TEXT("FXComponent"));
    this->m_CharacterVisualsComponent = NULL;
    this->m_CharacterTrinketsComponent = NULL;
    this->m_QuiverComponent = NULL;
    this->m_BloodComponent = CreateDefaultSubobject<UGothicBloodComponent>(TEXT("BloodComponent"));
    this->m_MaterialsComponent = CreateDefaultSubobject<UGothicMaterialsComponent>(TEXT("MaterialsComponent"));
    this->m_FocalPointComponent = CreateDefaultSubobject<UFocalPointComponent>(TEXT("FocalPointComponent"));
    this->m_WeatherComponent = CreateDefaultSubobject<UGothicWeatherComponent>(TEXT("WeatherComponent"));
    this->m_DirtComponent = CreateDefaultSubobject<UGothicDirtComponent>(TEXT("DirtComponent"));
    this->m_FootstepsDataComponent = CreateDefaultSubobject<UGothicFootstepsDataComponent>(TEXT("FootstepsDataComponent"));
    this->m_DataModule_Locomotion = NULL;
    this->m_DataModule_BaseStats = NULL;
    this->m_DataModule_Targeting = NULL;
    this->m_MutilatedSkeletalMeshActor = NULL;
    this->m_AnimComponent = CreateDefaultSubobject<UGothicAnimationComponent>(TEXT("AnimComponent"));
    this->m_GothicCinematicActorComponent = CreateDefaultSubobject<UGothicCinematicActorComponent>(TEXT("GothicCinematicActorComponent"));
    this->m_SyncCharacterComponent = CreateDefaultSubobject<UMPSyncCharacterComponent>(TEXT("MPSyncCharacterComponent"));
    this->m_CharacterState = NULL;
    this->m_CameraBoom = CreateDefaultSubobject<UGothicCameraSpringArmComponent>(TEXT("CameraBoom"));
    this->m_FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->m_EyesLocationSocketName = TEXT("LookAtSocket");
    this->m_HeadBone = TEXT("Head");
    this->m_InteractiveComponent = CreateDefaultSubobject<UInteractiveComponent>(TEXT("InteractiveComponent"));
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
    //FIXME this->m_CameraBoom->SetupAttachment(Mesh);
    this->m_CameraBoom->SetupAttachment(RootComponent);
    this->m_FXComponent->SetupAttachment(RootComponent);
    this->m_FollowCamera->SetupAttachment(m_CameraBoom);
    this->m_HUDDisplayCombatMarkerPositionComponent->SetupAttachment(RootComponent);
    this->m_HealthBarComponent->SetupAttachment(RootComponent);
    this->m_InteractiveComponent->SetupAttachment(RootComponent);
}

void AGothicCharacter::StopAutoHideHealthBar() {
}

void AGothicCharacter::ShowCharacter() {
}

void AGothicCharacter::SetVisibilityCharacterAndEverythingItCarries(bool IsVisible) const {
}

void AGothicCharacter::SetDelayedCustomTimerDilatation(float CustomTime, float Duration) {
}

void AGothicCharacter::SetCustomTimeDilation(float CustomTime) {
}

void AGothicCharacter::SetCustomAnimGlobalRateScale(float CustomRate) {
}

void AGothicCharacter::SetAsHiddenSpectatorCharacter(bool Enable) {
}

void AGothicCharacter::ServerNotifyInventoryQuickItemsMayHaveBeenModified_Implementation(EInventoryTypes slotType) const {
}

void AGothicCharacter::ServerDoPossess_Implementation(APawn* characterToPossess) {
}

void AGothicCharacter::Server_StopMontage_Implementation(UAnimMontage* MontageToStop) {
}

void AGothicCharacter::Server_SetAnimRootMotionTranslationScale_Implementation(float Scale) {
}

void AGothicCharacter::Server_PlayMontage_Implementation(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) const {
}

void AGothicCharacter::Server_PlayDynamicMontage_Implementation(UAnimSequenceBase* Animation, FName SlotName, float BlendInTime, float BlendOutTime, float PlayRate, float StartTime, FName SyncGroup) const {
}

void AGothicCharacter::Server_JumpToSectionMontage_Implementation(FName SectionName, UAnimMontage* MontageToPlay) {
}

void AGothicCharacter::Server_InitializeSkills_Implementation(const TArray<TSubclassOf<UScriptGameplayEffect>>& skills) {
}

void AGothicCharacter::Server_InitializeSavedData_Implementation() {
}

void AGothicCharacter::Server_InitializeAbilities_Implementation(const UGameplayEffect* AbilitySet) {
}

void AGothicCharacter::Server_ApplyTagsAndEffectsSavedData_Implementation() {
}

void AGothicCharacter::SendGlobalEvent(FGameplayTag verb, FName instigatorName, FName EventName, float NewValue, bool forced, FName UserName) {
}

void AGothicCharacter::ResetTimeDilatation() {
}

void AGothicCharacter::RecreatePhysicsAndClothState() const {
}

void AGothicCharacter::OnResetStates() {
}

void AGothicCharacter::OnOverlapBeginServer_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGothicCharacter::MulticastPlayUnTransformMontage_Implementation(UAnimMontage* Montage) {
}

void AGothicCharacter::MulticastNotifyInventoryQuickItemsMayHaveBeenModified_Implementation(EInventoryTypes slotType) const {
}

void AGothicCharacter::Multicast_StopMontage_Implementation(UAnimMontage* MontageToStop) {
}

void AGothicCharacter::Multicast_SetEnableCollisions_Implementation(bool Enabled) {
}

void AGothicCharacter::Multicast_SetCustomTimerDilatation_Implementation(float CustomTime, float Duration) {
}

void AGothicCharacter::Multicast_SendGlobalEvent_Implementation(FGameplayTag verb, FName instigatorName, FName EventName, float NewValue, bool forced, FName UserName) {
}

void AGothicCharacter::Multicast_PlayMontage_Implementation(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages, bool play_local) const {
}

void AGothicCharacter::Multicast_PlayDynamicMontage_Implementation(UAnimSequenceBase* Animation, FName SlotName, float BlendInTime, float BlendOutTime, float PlayRate, float StartTime, FName SyncGroup, bool play_local) const {
}

void AGothicCharacter::Multicast_JumpToSectionMontage_Implementation(FName SectionName, UAnimMontage* MontageToPlay, bool play_local) {
}

void AGothicCharacter::MakeRideable() const {
}

bool AGothicCharacter::IsPlayerCharacterOrPlayerControlled() const {
    return false;
}

bool AGothicCharacter::IsPlayerCharacter() const {
    return false;
}

bool AGothicCharacter::IsNPCCharacter() const {
    return false;
}

bool AGothicCharacter::IsDefeated() const {
    return false;
}

bool AGothicCharacter::IsDead() const {
    return false;
}

bool AGothicCharacter::HasGameplayTag(const FGameplayTag& Tag) const {
    return false;
}

bool AGothicCharacter::HasAnyGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool AGothicCharacter::HasAllGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool AGothicCharacter::HasAbility(TSubclassOf<UGameplayAbility> AbilityClass) const {
    return false;
}

UGothicWeatherComponent* AGothicCharacter::GetWeatherComponent() const {
    return NULL;
}

UWalkSpeedModifierComponent* AGothicCharacter::GetWalkSpeedModifierComponent() const {
    return NULL;
}

UCueVisualConfig* AGothicCharacter::GetVisualDebuffConfig(FGameplayTag DebuffTag) const {
    return NULL;
}

USubCapsuleManagerComponent* AGothicCharacter::GetSubCapsuleManagerComponent() const {
    return NULL;
}

UGothicRiderComponent* AGothicCharacter::GetRiderComponent() const {
    return NULL;
}

UCharacterRelationshipComponent* AGothicCharacter::GetRelationship() const {
    return NULL;
}

UQuiverComponent* AGothicCharacter::GetQuiverComponent() const {
    return NULL;
}

UCharacterPerceptionComponent* AGothicCharacter::GetPerception() const {
    return NULL;
}

//FIXME
//FNavAgentProperties AGothicCharacter::GetNavAgentPropertiesRef() const {
//    return FNavAgentProperties{};
//}

UGothicMountComponent* AGothicCharacter::GetMountComponent() const {
    return NULL;
}

UGothicMagicComponent* AGothicCharacter::GetMagicComponent() const {
    return NULL;
}

int32 AGothicCharacter::GetMagicCircleIndexFrom(const FGameplayTag& GameplayTag) const {
    return 0;
}

UInventoryComponent* AGothicCharacter::GetInventory() const {
    return NULL;
}

UNPCHealthBarComponent* AGothicCharacter::GetHealthBarComponent() const {
    return NULL;
}

UGothicMovementComponent* AGothicCharacter::GetGothicMovementComponent() const {
    return NULL;
}

UGothicMaterialsComponent* AGothicCharacter::GetGothicMaterialsComponent() const {
    return NULL;
}

UGothicBloodComponent* AGothicCharacter::GetGothicBloodComponent() const {
    return NULL;
}

UGothicFXComponent* AGothicCharacter::GetFXComponent() const {
    return NULL;
}

UFocalPointComponent* AGothicCharacter::GetFocalPointComponent() const {
    return NULL;
}

FVector AGothicCharacter::GetFeetLocation() const {
    return FVector{};
}

float AGothicCharacter::GetEyesToCenterOffsetXY() const {
    return 0.0f;
}

FName AGothicCharacter::GetEyesSocketName() const {
    return NAME_None;
}

FVector AGothicCharacter::GetEyesLocation() const {
    return FVector{};
}

float AGothicCharacter::GetEyesHeightFromFeet() const {
    return 0.0f;
}

float AGothicCharacter::GetEyesHeight() const {
    return 0.0f;
}

float AGothicCharacter::GetDistanceToHitCollision(const FVector& Point) const {
    return 0.0f;
}

UDataModule_Targeting* AGothicCharacter::GetDataModule_Targeting() const {
    return NULL;
}

TArray<UPrimitiveComponent*> AGothicCharacter::GetCollisionComponents() const {
    return TArray<UPrimitiveComponent*>();
}

UCharacterVisualsComponent* AGothicCharacter::GetCharacterVisualsComponent() const {
    return NULL;
}

FName AGothicCharacter::GetCharacterUniqueName() const {
    return NAME_None;
}

FGameplayTag AGothicCharacter::GetCharacterMagicCircleTag() {
    return FGameplayTag{};
}

int32 AGothicCharacter::GetCharacterMagicCircleLevelFromAttr() {
    return 0;
}

FName AGothicCharacter::GetCharacterGlobalId() const {
    return NAME_None;
}

FText AGothicCharacter::GetCharacterDisplayName() const {
    return FText::GetEmpty();
}

UCharacterDefinition* AGothicCharacter::GetCharacterDefinition() const {
    return NULL;
}

UCarryComponent* AGothicCharacter::GetCarryComponent() const {
    return NULL;
}

UGothicAnimationComponent* AGothicCharacter::GetAnimationComponent() const {
    return NULL;
}

UAbilitySystemComponent* AGothicCharacter::GetAbilitySystemComponent() const {
    return NULL;
}

void AGothicCharacter::ClientTeleportTo_Implementation(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck) {
}

void AGothicCharacter::ClientSetSpellToCamera_Implementation(const FCameraBehaviour& CameraBehaviour) {
}

void AGothicCharacter::Client_AttachToComponent_Implementation(USceneComponent* Parent, EAttachmentRule AttachmentRule, bool weldSimulatedBodies, FName SocketName) {
}

bool AGothicCharacter::CanCastSpell(const FGameplayTag& spellTag) const {
    return false;
}


bool AGothicCharacter::BP_IsGameplayReady() const {
    return false;
}

AGothicCharacterState* AGothicCharacter::BP_GetCharacterState() const {
    return NULL;
}

void AGothicCharacter::ActiveFreezeFrame(float CustomTime, float FreezeDuration, float BlendOutDuration) {
}

void AGothicCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGothicCharacter, m_CharacterState);
}


