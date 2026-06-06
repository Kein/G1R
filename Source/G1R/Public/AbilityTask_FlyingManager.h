#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_FlyingManager.generated.h"

class ACharacter;
class UAbilityTask_FlyingManager;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_FlyingManager : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ACharacter* m_Character;
    
public:
    UAbilityTask_FlyingManager();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_FlyingManager* CreateFloatingActorTask(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

