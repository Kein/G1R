#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "OnTargetDieDelegateDelegate.h"
#include "OnTargetLostDelegateDelegate.h"
#include "AbilityTask_UpdateTarget.generated.h"

class AActor;
class UAbilityTask_UpdateTarget;
class UGameplayAbility;
class USceneComponent;
class UTargetConfigBase;

UCLASS()
class G1R_API UAbilityTask_UpdateTarget : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTargetLostDelegate OnTargetVisualLost;
    
    UPROPERTY(BlueprintAssignable)
    FOnTargetDieDelegate OnTargetDie;
    
    UPROPERTY(BlueprintAssignable)
    FOnTargetDieDelegate OnTargetDefeated;
    
protected:
    UPROPERTY(Instanced)
    USceneComponent* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTargetConfigBase* m_TargetConfig;
    
public:
    UAbilityTask_UpdateTarget();

protected:
    UFUNCTION()
    void OnTargetVisionLost();
    
    UFUNCTION()
    void OnTargetDestroyed(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateTarget* CreateUpdateTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* Target, float SphereTraceRadius);
    
    UFUNCTION()
    void CheckVisibilityTarget();
    
};

