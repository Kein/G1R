#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "LooWorldContainerDelegateDelegate.h"
#include "AbilityTask_LootWorldContainer.generated.h"

class AActor;
class UAbilityTask_LootWorldContainer;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_LootWorldContainer : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLooWorldContainerDelegate OnFinish;
    
private:
    UPROPERTY()
    AActor* m_ContainerActor;
    
public:
    UAbilityTask_LootWorldContainer();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_LootWorldContainer* LootWorldContainer(UGameplayAbility* OwningAbility, const AActor* Container);
    
};

