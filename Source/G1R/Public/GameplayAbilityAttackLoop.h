#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityAttackBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityAttackLoop.generated.h"

class AActor;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitDelay;
class UAbilityTask_WaitGameplayEvent;
class UAttackLoopConfig;
class UPrimitiveComponent;

UCLASS()
class G1R_API UGameplayAbilityAttackLoop : public UGameplayAbilityAttackBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    UAbilityTask_WaitDelay* m_MaxTimeLoopTask;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_WaitEndTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<AActor*, FActiveGameplayEffectHandle> m_Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* m_CollisionComponent;
    
public:
    UGameplayAbilityAttackLoop();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
    UFUNCTION()
    void OnRequestedEnd(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyEnd_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyBegin_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNonValidTarget_Scriptable(UPrimitiveComponent* HitComp, const FHitResult& Hit);
    
    UFUNCTION()
    void OnEndTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NeedCalculateSourceDirection_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void K2_OnOverlapExit(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void K2_OnOverlapEnterDamage(UPrimitiveComponent* HitComp, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidTarget_Scriptable(AActor* Target);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsTargetValid_Scriptable(AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeCollisionComponent(UPrimitiveComponent* CollisionComp, const UAttackLoopConfig* configAttack);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetOverlappingActorsFromHitTask(TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetCombatHitType_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetCollisionComponentByName(const FString& CollisionCompName);
    
};

