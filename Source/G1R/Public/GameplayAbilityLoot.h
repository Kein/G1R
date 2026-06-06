#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EInventoryTypes.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityLoot.generated.h"

class AActor;
class UAbilityTask_LootWorldContainer;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UHUDLootController;
class UInteractSensor;
class UItemDefinition;

UCLASS()
class G1R_API UGameplayAbilityLoot : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_LootWorldContainer* m_TaskLootContainer;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    UAnimMontage* m_CharMontage;
    
    UPROPERTY()
    UHUDLootController* HUDLootController;
    
    UPROPERTY(Instanced)
    UInteractSensor* m_InteractComp;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY()
    FTimerHandle m_FailsafeTimerHandle;
    
public:
    UGameplayAbilityLoot();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryTakeItemWithDefinitionFromTarget(AActor* Target, TSubclassOf<UItemDefinition> Definition, int32 Amount, EInventoryTypes targetInventorySlot);
    
    UFUNCTION(BlueprintCallable)
    bool TryTakeItemOfTypeFromTarget(AActor* Target, FGameplayTag ItemType, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void TaskFinished();
    
    UFUNCTION(Reliable, Server)
    void Server_OnCloseRequested();
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleNPCLooting();
    
    UFUNCTION(BlueprintCallable)
    void EventStartHud(FGameplayEventData Payload);
    
    UFUNCTION()
    void CloseLootContainer();
    
};

