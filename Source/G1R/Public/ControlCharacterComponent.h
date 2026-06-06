#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GothicActorComponentInterface.h"
#include "ControlCharacterComponent.generated.h"

class AAIAgentCharacter;
class AAIAgentController;
class AGothicCharacter;
class AGothicCharacterState;
class APlayerController;
class UGothicCameraModifierControlSpell;
class UHUDBorderWarningController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UControlCharacterComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<APlayerController> m_PlayerController;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AGothicCharacter> m_InstigatorControllerCharacter;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AAIAgentCharacter> m_ControlledAICharacter;
    
    UPROPERTY()
    TWeakObjectPtr<AAIAgentController> m_ControlledAIController;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacterState> m_ControlledOriginalState;
    
    UPROPERTY()
    TWeakObjectPtr<UHUDBorderWarningController> m_BorderWarningHUDController;
    
    UPROPERTY()
    UGothicCameraModifierControlSpell* m_CameraModifier;
    
public:
    UControlCharacterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void ServerDoPossessUnPossess();
    
    UFUNCTION(Reliable, Server)
    void ServerDoFinishControl();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastControlStarted(float areaRange);
    
    UFUNCTION(Client, Reliable)
    void ClientStartCameraTravel(float cameraTravelInitialDelay, float cameraTravelDuration, bool isReverse, float warningLevel);
    
    UFUNCTION(Client, Reliable)
    void ClientDeactivateControlSpellAbility(const AGothicCharacter* controlledCharacter, const FGameplayTag& EventTag, const FGameplayEventData EventData) const;
    
    UFUNCTION(Client, Reliable)
    void ClientContinueAfterWork();
    

    // Fix for true pure virtual functions not being implemented
};

