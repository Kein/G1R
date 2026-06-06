#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EInventoryTypes.h"
#include "GameplayAbilityMovement.h"
#include "GameplayAbilityThrow.generated.h"

class AActor;
class AItemVisual;
class AItemVisualWorld;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitGameplayEvent;
class UCarryComponent;

UCLASS()
class G1R_API UGameplayAbilityThrow : public UGameplayAbilityMovement {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_TaskCharMontage;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_LaunchItemTask;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_AttachItemTask;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_UnAttachItemTask;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY()
    AItemVisual* m_VisualAttachedItem;
    
public:
    UGameplayAbilityThrow();

private:
    UFUNCTION()
    void ThrowInEndedTransition();
    
protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnObject(UClass* Actor, FVector position, FRotator Rotation);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_SetNextSection(FName Section);
    
    UFUNCTION(Reliable, Server)
    void Server_OnGetItem(EInventoryTypes invToUse, int32 slotIdToUse, bool SwapItem);
    
    UFUNCTION(Reliable, Server)
    void Server_FirePressed();
    
    UFUNCTION()
    void RemoveThrowInEndedTransition();
    
protected:
    UFUNCTION()
    void OnWaterLevelChanged(float WaterDepth);
    
    UFUNCTION()
    void OnTargetingChanged(FGameplayTag InTag, int32 NewCount);
    
private:
    UFUNCTION()
    void OnItemUnAttach(const FGameplayEventData Payload);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemThrowed_Scriptable(AItemVisualWorld* Item);
    
    UFUNCTION()
    void OnItemThrowed(AItemVisualWorld* Item);
    
private:
    UFUNCTION()
    void OnItemLaunched(const FGameplayEventData Payload);
    
    UFUNCTION()
    void OnItemAttach(const FGameplayEventData Payload);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_OnGetItem(EInventoryTypes invToUse, int32 slotIdToUse, bool SwapItem);
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_FirePressed();
    
    UFUNCTION()
    void FirePressed();
    
    UFUNCTION(Client, Reliable)
    void Client_SetNextSection(FName Section);
    
};

