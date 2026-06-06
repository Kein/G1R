#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdatePOI.generated.h"

class UAbilityTask_UpdatePOI;
class UGameplayAbility;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdatePOI : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USceneComponent* m_Target;
    
public:
    UAbilityTask_UpdatePOI();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdatePOI* CreateUpdatePOI(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

