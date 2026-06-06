#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AddsStaticInteractionSpots.h"
#include "CharacterUniqueName.h"
#include "DataModuleOwner.h"
#include "FreepointActionTags_DEPRECATED.h"
#include "FreepointUsageRestriction_DEPRECATED.h"
#include "InteractionSpotOwner.h"
#include "InteractionSpotRequirementsPack.h"
#include "InteractiveAnchorOwner.h"
#include "InteractiveObjectUsedInterface.h"
#include "OwnershipSettings.h"
#include "Templates/SubclassOf.h"
#include "WaynetRelevantInterface.h"
#include "InteractiveObjectActor.generated.h"

class AGothicCharacterState;
class UAnimInstance;
class UAnimMontage;
class UCameraComponent;
class UDataModuleComponent;
class UFireVisualComponent;
class UInteractiveComponent;
class UInteractiveObjectAnchorComponent;
class UInteractiveObjectDefinition;
class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class G1R_API AInteractiveObjectActor : public AActor, public IDataModuleOwner, public IInteractionSpotOwner, public IWaynetRelevantInterface, public IInteractiveObjectUsedInterface, public IAddsStaticInteractionSpots, public IInteractiveAnchorOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_PersistentId;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_ItemDefinition;
    
    UPROPERTY(EditAnywhere)
    bool m_MustAlwaysTick;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCreateDefaultCameraComponent: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCreateDefaultStaticMeshComponent: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCreateDefaultSkeletalMeshComponent: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCreateDefaultAnchorComponent: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCreateDefaultUINamePositionComponent: 1;
    
    UPROPERTY(EditAnywhere, Instanced)
    UInteractiveObjectDefinition* m_InteractiveObjectDefinition;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* m_SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* m_MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UInteractiveComponent* m_InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UInteractiveObjectAnchorComponent* m_BaseAnchorComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UDataModuleComponent* m_DataModuleComponent;
    
    UPROPERTY()
    FFreepointUsageRestriction_DEPRECATED m_FreepointUsageRestriction;
    
    UPROPERTY(EditAnywhere)
    bool m_UseActionTagsForInteractObject;
    
public:
    UPROPERTY(EditAnywhere)
    FString m_FreepointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_AdditionalPossibleActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionSpotRequirementsPack m_InteractionSpotRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_InheritOwnershipFromArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_OverrideOwnership;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOwnershipSettings m_Ownership;
    
    UPROPERTY()
    bool m_bHasMigratedDataFromFreepointConfig;
    
    UPROPERTY()
    int32 m_HasMigratedDataFromFreepointConfig2;
    
    UPROPERTY()
    FFreepointActionTags_DEPRECATED m_FreepointActionTags;
    
    UPROPERTY(EditAnywhere, Instanced)
    USphereComponent* UINamePosition;
    
    AInteractiveObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsBeingUsed(bool Value);
    
    UFUNCTION(Reliable, Server)
    void Server_PlayInteractMontage(UAnimMontage* AnimMontage, bool Finish);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopInteractMontage() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetNextSectionOfInteractMontage(FName ToSectionName, UAnimMontage* AnimMontage) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetDataInt(const FGameplayTag DataName, const int32 InData);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ReplaceNextSectionOfInteractMontage(FName changeNextOf, FName ToSectionName, UAnimMontage* AnimMontage) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_PlayInteractMontage(UAnimMontage* AnimMontage, bool Finish);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_JumpSectionInteractMontage(FName SectionName, UAnimMontage* AnimMontage) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetPersistentId() const;
    
    UFUNCTION(BlueprintPure)
    UInteractiveObjectDefinition* GetInteractiveObjectDefinition() const;
    
    UFUNCTION(BlueprintPure)
    UInteractiveComponent* GetInteractiveComponent() const;
    
    UFUNCTION(BlueprintPure)
    UFireVisualComponent* GetFireComponent() const;
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* GetAnimInstance();
    
    UFUNCTION(BlueprintPure)
    FCharacterUniqueName FindCharacter(FName CharacterUniqueName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayActionOnPicked(AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayActionConsume(AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PlayAction(AGothicCharacterState* CharacterState);
    

    // Fix for true pure virtual functions not being implemented
};

