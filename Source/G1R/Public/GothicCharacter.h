#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Animation/AnimInstance.h"
#include "Engine/HitResult.h"
#include "AI/Navigation/NavigationTypes.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BonesSettings.h"
#include "CameraBehaviour.h"
#include "CharacterStateProvider.h"
#include "ClientAuthoritativeCharacter.h"
#include "EInventoryTypes.h"
#include "GameplayIsReadyDynamicDelegateDelegate.h"
#include "InteractionSpotOwner.h"
#include "MPSyncCommonCharacter.h"
#include "OnStanceChangedDelegateDelegate.h"
#include "SyncResourcesLoading.h"
#include "Templates/SubclassOf.h"
#include "GothicCharacter.generated.h"

class AActor;
class AGothicCharacterState;
class AGothicMutilatedSkeletalMeshActor;
class APawn;
class UAbilitySystemComponent;
class UAnimMontage;
class UAnimSequenceBase;
class UCameraComponent;
class UCarryComponent;
class UCharacterDefinition;
class UCharacterPerceptionComponent;
class UCharacterRelationshipComponent;
class UCharacterTrinketsComponent;
class UCharacterVisualsComponent;
class UCueVisualConfig;
class UDataModule_BaseStats;
class UDataModule_Locomotion;
class UDataModule_Targeting;
class UFocalPointComponent;
class UGameplayAbility;
class UGameplayEffect;
class UGothicAnimationComponent;
class UGothicBloodComponent;
class UGothicCameraSpringArmComponent;
class UGothicCinematicActorComponent;
class UGothicDirtComponent;
class UGothicFXComponent;
class UGothicFootstepsDataComponent;
class UGothicMagicComponent;
class UGothicMaterialsComponent;
class UGothicMountComponent;
class UGothicMovementComponent;
class UGothicRiderComponent;
class UGothicTimeDilationComponent;
class UGothicWaterVolumeSensor;
class UGothicWeatherComponent;
class UHUDDisplayCombatMarkerPositionComponent;
class UInteractiveComponent;
class UInventoryComponent;
class UMPSyncCharacterComponent;
class UNPCHealthBarComponent;
class UPrimitiveComponent;
class UQuiverComponent;
class URagdollComponent;
class USceneComponent;
class UScriptGameplayEffect;
class USubCapsuleManagerComponent;
class UWalkSpeedModifierComponent;
class UWidgetComponent;

UCLASS(NotPlaceable)
class G1R_API AGothicCharacter : public AClientAuthoritativeCharacter, public IAbilitySystemInterface, public IMPSyncCommonCharacter, public ISyncResourcesLoading, public IInteractionSpotOwner, public ICharacterStateProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnStanceChangedDelegate OnStanceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameplayIsReadyDynamicDelegate OnGameplayIsReadyDynamicDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FBonesSettings m_BonesSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidgetComponent* CurrentDebugWidgetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UNPCHealthBarComponent* m_HealthBarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UHUDDisplayCombatMarkerPositionComponent* m_HUDDisplayCombatMarkerPositionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URagdollComponent* m_RagdollComponent;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Instanced)
    UGothicMagicComponent* m_MagicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicTimeDilationComponent* m_TimeDilationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicWaterVolumeSensor* m_GothicWaterVolumeSensor;
    
    UPROPERTY(Instanced)
    UWalkSpeedModifierComponent* m_WalkSpeedModifierComponent;
    
    UPROPERTY(Instanced)
    UCharacterPerceptionComponent* m_PerceptionComponent;
    
    UPROPERTY(Instanced)
    USubCapsuleManagerComponent* m_SubCapsuleManagerComponent;
    
    UPROPERTY(Instanced)
    UGothicFXComponent* m_FXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCharacterVisualsComponent* m_CharacterVisualsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCharacterTrinketsComponent* m_CharacterTrinketsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UQuiverComponent* m_QuiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicBloodComponent* m_BloodComponent;
    
    UPROPERTY(Instanced)
    UGothicMaterialsComponent* m_MaterialsComponent;
    
    UPROPERTY(Instanced)
    UFocalPointComponent* m_FocalPointComponent;
    
    UPROPERTY(Instanced)
    UGothicWeatherComponent* m_WeatherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicDirtComponent* m_DirtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicFootstepsDataComponent* m_FootstepsDataComponent;
    
    UPROPERTY()
    UDataModule_Locomotion* m_DataModule_Locomotion;
    
    UPROPERTY()
    UDataModule_BaseStats* m_DataModule_BaseStats;
    
    UPROPERTY()
    UDataModule_Targeting* m_DataModule_Targeting;
    
    UPROPERTY()
    AGothicMutilatedSkeletalMeshActor* m_MutilatedSkeletalMeshActor;
    
    UPROPERTY(Instanced)
    UGothicAnimationComponent* m_AnimComponent;
    
private:
    UPROPERTY(Instanced)
    UGothicCinematicActorComponent* m_GothicCinematicActorComponent;
    
    UPROPERTY(Instanced)
    UMPSyncCharacterComponent* m_SyncCharacterComponent;
    
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> m_CollisionComponents;
    
    UPROPERTY(Replicated)
    AGothicCharacterState* m_CharacterState;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGothicCameraSpringArmComponent* m_CameraBoom;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* m_FollowCamera;
    
protected:
    UPROPERTY()
    FName m_EyesLocationSocketName;
    
    UPROPERTY()
    FName m_HeadBone;
    
    UPROPERTY(Instanced)
    UInteractiveComponent* m_InteractiveComponent;
    
public:
    AGothicCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void StopAutoHideHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void ShowCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVisibilityCharacterAndEverythingItCarries(bool IsVisible) const;
    
    UFUNCTION(BlueprintCallable)
    void SetDelayedCustomTimerDilatation(float CustomTime, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTimeDilation(float CustomTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomAnimGlobalRateScale(float CustomRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAsHiddenSpectatorCharacter(bool Enable);
    
    UFUNCTION(Reliable, Server)
    void ServerNotifyInventoryQuickItemsMayHaveBeenModified(EInventoryTypes slotType) const;
    
    UFUNCTION(Reliable, Server)
    void ServerDoPossess(APawn* characterToPossess);
    
    UFUNCTION(Reliable, Server)
    void Server_StopMontage(UAnimMontage* MontageToStop);
    
    UFUNCTION(Reliable, Server)
    void Server_SetAnimRootMotionTranslationScale(float Scale);
    
    UFUNCTION(Reliable, Server)
    void Server_PlayMontage(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) const;
    
    UFUNCTION(Reliable, Server)
    void Server_PlayDynamicMontage(UAnimSequenceBase* Animation, FName SlotName, float BlendInTime, float BlendOutTime, float PlayRate, float StartTime, FName SyncGroup) const;
    
    UFUNCTION(Reliable, Server)
    void Server_JumpToSectionMontage(FName SectionName, UAnimMontage* MontageToPlay);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_InitializeSkills(const TArray<TSubclassOf<UScriptGameplayEffect>>& skills);
    
    UFUNCTION(Reliable, Server)
    void Server_InitializeSavedData();
    
    UFUNCTION(Reliable, Server)
    void Server_InitializeAbilities(const UGameplayEffect* AbilitySet);
    
    UFUNCTION(Reliable, Server)
    void Server_ApplyTagsAndEffectsSavedData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SendGlobalEvent(FGameplayTag verb, FName instigatorName, FName EventName, float NewValue, bool forced, FName UserName);
    
protected:
    UFUNCTION()
    void ResetTimeDilatation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RecreatePhysicsAndClothState() const;
    
    UFUNCTION()
    void OnResetStates();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnOverlapBeginServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPlayUnTransformMontage(UAnimMontage* Montage);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyInventoryQuickItemsMayHaveBeenModified(EInventoryTypes slotType) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopMontage(UAnimMontage* MontageToStop);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetEnableCollisions(bool Enabled);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_SetCustomTimerDilatation(float CustomTime, float Duration);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendGlobalEvent(FGameplayTag verb, FName instigatorName, FName EventName, float NewValue, bool forced, FName UserName);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayMontage(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages, bool play_local) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayDynamicMontage(UAnimSequenceBase* Animation, FName SlotName, float BlendInTime, float BlendOutTime, float PlayRate, float StartTime, FName SyncGroup, bool play_local) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_JumpToSectionMontage(FName SectionName, UAnimMontage* MontageToPlay, bool play_local);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MakeRideable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerCharacterOrPlayerControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNPCCharacter() const;
    
    UFUNCTION()
    bool IsDefeated() const;
    
    UFUNCTION()
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGameplayTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAllGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAbility(TSubclassOf<UGameplayAbility> AbilityClass) const;
    
    UFUNCTION(BlueprintPure)
    UGothicWeatherComponent* GetWeatherComponent() const;
    
    UFUNCTION(BlueprintPure)
    UWalkSpeedModifierComponent* GetWalkSpeedModifierComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCueVisualConfig* GetVisualDebuffConfig(FGameplayTag DebuffTag) const;
    
    UFUNCTION(BlueprintPure)
    USubCapsuleManagerComponent* GetSubCapsuleManagerComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicRiderComponent* GetRiderComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterRelationshipComponent* GetRelationship() const;
    
    UFUNCTION(BlueprintPure)
    UQuiverComponent* GetQuiverComponent() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterPerceptionComponent* GetPerception() const;
    
    //FIXME
    //UFUNCTION(BlueprintPure)
    //FNavAgentProperties GetNavAgentPropertiesRef() const;
    
    UFUNCTION(BlueprintPure)
    UGothicMountComponent* GetMountComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicMagicComponent* GetMagicComponent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMagicCircleIndexFrom(const FGameplayTag& GameplayTag) const;
    
    UFUNCTION(BlueprintPure)
    UInventoryComponent* GetInventory() const;
    
    UFUNCTION(BlueprintPure)
    UNPCHealthBarComponent* GetHealthBarComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicMovementComponent* GetGothicMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicMaterialsComponent* GetGothicMaterialsComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicBloodComponent* GetGothicBloodComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicFXComponent* GetFXComponent() const;
    
    UFUNCTION(BlueprintPure)
    UFocalPointComponent* GetFocalPointComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFeetLocation() const;
    
    UFUNCTION()
    float GetEyesToCenterOffsetXY() const;
    
    UFUNCTION()
    FName GetEyesSocketName() const;
    
    UFUNCTION()
    FVector GetEyesLocation() const;
    
    UFUNCTION()
    float GetEyesHeightFromFeet() const;
    
    UFUNCTION()
    float GetEyesHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToHitCollision(const FVector& Point) const;
    
    UFUNCTION(BlueprintPure)
    UDataModule_Targeting* GetDataModule_Targeting() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPrimitiveComponent*> GetCollisionComponents() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterVisualsComponent* GetCharacterVisualsComponent() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterUniqueName() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetCharacterMagicCircleTag();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCharacterMagicCircleLevelFromAttr();
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterGlobalId() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCharacterDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterDefinition* GetCharacterDefinition() const;
    
    UFUNCTION(BlueprintPure)
    UCarryComponent* GetCarryComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGothicAnimationComponent* GetAnimationComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    UFUNCTION(Client, Reliable)
    void ClientTeleportTo(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck);
    
    UFUNCTION(Client, Reliable)
    void ClientSetSpellToCamera(const FCameraBehaviour& CameraBehaviour);
    
    UFUNCTION(Client, Reliable)
    void Client_AttachToComponent(USceneComponent* Parent, EAttachmentRule AttachmentRule, bool weldSimulatedBodies, FName SocketName);
    
    UFUNCTION(BlueprintPure)
    bool CanCastSpell(const FGameplayTag& spellTag) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOverlapWater(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsGameplayReady() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* BP_GetCharacterState() const;
    
    UFUNCTION(BlueprintCallable)
    void ActiveFreezeFrame(float CustomTime, float FreezeDuration, float BlendOutDuration);
    

    // Fix for true pure virtual functions not being implemented
};

