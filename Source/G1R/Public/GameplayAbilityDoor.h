#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EGenericTaskResult.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "OwnedLooseGameplayTags.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityDoor.generated.h"

class UAbilityTaskGeneric;
class UAbilityTask_InteractionSpot_Montage;
class UAbilityTask_LockPick;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityDoor : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UAbilityTask_LockPick* m_LockPickTask;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY()
    FOwnedLooseGameplayTags OwnedGameplayTags;
    
    UPROPERTY(Transient)
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask_Door;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_LockpickingDoorKnobLeftMontage;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_LockpickingDoorKnobRightMontage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAbilityTask_InteractionSpot_Montage> m_LockpickingInteractionTaskClass;
    
    UPROPERTY(Transient)
    UAbilityTask_InteractionSpot_Montage* m_LockpickingInteractionTask;
    
    UPROPERTY(EditAnywhere)
    FName m_UniqueNameDoorConnection;
    
    UPROPERTY(EditAnywhere)
    FName m_UniqueNameInteractive;
    
    UPROPERTY(EditAnywhere)
    FName m_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_PuzzleKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ConsumeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_LockDifficulty;
    
    UPROPERTY(EditAnywhere)
    FName m_SendTrigger;
    
public:
    UGameplayAbilityDoor();

protected:
    UFUNCTION()
    void SuccessLockEvent();
    
    UFUNCTION(Reliable, Server)
    void Server_SuccessLockEvent();
    
    UFUNCTION(Reliable, Server)
    void Server_OnSetLockUnlocked();
    
    UFUNCTION(Reliable, Server)
    void Server_NoLockEvent();
    
    UFUNCTION(Reliable, Server)
    void Server_FailedLockEvent();
    
    UFUNCTION(Reliable, Server)
    void Server_CreateAndRunLockpickingInteractionTask();
    
    UFUNCTION()
    void OnLockpickingInteractionTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void NoLockEvent();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_OnSetLockUnlocked(FName ActorName);
    
    UFUNCTION()
    void FailedLockEvent();
    
    UFUNCTION(BlueprintCallable)
    void EventPlayAction(FGameplayEventData Payload);
    
};

