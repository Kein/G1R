#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskBase.h"
#include "LockPickSimpleDelegateDelegate.h"
#include "AbilityTask_LockPick.generated.h"

class UAbilityTask_LockPick;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_LockPick : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnNoLockPick;
    
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnSuccessLockPick;
    
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnFailedLockPick;
    
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnSetLockUnlocked;
    
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnSectionMoved;
    
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnLockPickActorBecameInactive;
    
    UPROPERTY(BlueprintAssignable)
    FLockPickSimpleDelegate OnLockPickActorBecameActive;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer OwnedTagsWhileActive;
    
    UAbilityTask_LockPick();

    UFUNCTION()
    void UpPressed();
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_LockPick* TryOpenLock(UGameplayAbility* OwningAbility, const FName& Lock, const TArray<FName>& Keys, const FName& InteractiveObjectActorName, const TArray<FName>& PuzzleKeys, const bool ConsumeKeys);
    
    UFUNCTION()
    void RightPressed();
    
    UFUNCTION()
    void ResetPressed();
    
    UFUNCTION()
    void Reset();
    
    UFUNCTION()
    void MemorizeLockpick();
    
    UFUNCTION()
    void LeftPressed();
    
    UFUNCTION()
    void DownPressed();
    
    UFUNCTION()
    void BackPressed();
    
};

