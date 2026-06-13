#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotOwner.h"
#include "InteractiveAnchorOwner.h"
#include "InteractiveComponentConfigurationSet.h"
#include "InteractiveComponent.generated.h"

class AActor;
class AGothicCharacterState;
class UDoorInteractiveComponent;
class UFireVisualComponent;
class UInteractiveObjectAnchorComponent;
class UInteractiveObjectDefinition;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UInteractiveComponent : public USceneComponent, public IInteractionSpotOwner, public IInteractiveAnchorOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced, Replicated)
    UInteractiveObjectDefinition* m_InteractItem;
    
    UPROPERTY(Replicated)
    TArray<FInteractiveComponentConfigurationSet> m_CurrentInteractionConfigs;
    
    UPROPERTY(Instanced, Transient)
    TArray<UInteractiveObjectAnchorComponent*> m_InteractiveAnchors;
    
    UPROPERTY(Instanced, Transient)
    TArray<UInteractiveObjectAnchorComponent*> m_InteractiveVisualAnchors;
    
    UPROPERTY(Replicated)
    float m_ObjectPeripheralVisionCosine;
    
    UPROPERTY(Replicated)
    float m_PlayerPeripheralVisionCosine;
    
    UPROPERTY(Replicated)
    bool m_IsBeingUsed;
    
    UPROPERTY(Replicated)
    int32 m_NumUses;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_CanBeUsed;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_DontPlayNotification;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_ForceDisableInteraction;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_ForceDisableUI;
    
    UPROPERTY(Instanced)
    UFireVisualComponent* m_FireVisualComponent;
    
    UPROPERTY(Instanced)
    UDoorInteractiveComponent* m_DoorComponent;
    
private:
    UPROPERTY()
    FGameplayMessageListenerHandle m_ListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_ListenerHandleActiveUntil;
    
protected:
    UPROPERTY(Transient)
    TArray<FInteractionSpotHandle> m_OwnedInteractionSpots;
    
    UPROPERTY(EditAnywhere)
    bool bCreateInteractionSpots;
    
    UPROPERTY(EditAnywhere)
    bool bAddToWaynet;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AActor> m_ActorToInteract;
    
public:
    UInteractiveComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetUsed(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBeingUsed(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableUI(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableInteraction(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeUsed(bool Value, bool save, bool withNotification);
    
    UFUNCTION(BlueprintCallable)
    void RemoveForever();
    
    UFUNCTION(BlueprintPure)
    bool MustShowDontUseNotif() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsable() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSelectedToInteract();
    
    UFUNCTION(BlueprintPure)
    bool IsBeingUsed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAssociatedToAnActor();
    
    UFUNCTION(BlueprintPure)
    float GetPlayerInteractDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerFarInteractDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerCloseInteractDistance() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBeingUsed();
    
    UFUNCTION(BlueprintPure)
    bool GetForceDisableUI() const;
    
    UFUNCTION(BlueprintPure)
    bool GetForceDisableInteraction() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorToInteract();
    
    UFUNCTION(BlueprintPure)
    FText DisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugIsUsable() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAssociatedActorToInteract();
    
    UFUNCTION(BlueprintPure)
    bool CanAnyInteractionSpotBeClaimed(const AGothicCharacterState* UserActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_TryGetInteractTransform(bool bMustBeVisual, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable)
    void AssociateActorToInteract(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

