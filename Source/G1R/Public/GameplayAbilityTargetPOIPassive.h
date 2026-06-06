#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetPointOfInterest.h"
#include "GameplayAbilityTargetPOIPassive.generated.h"

class UAbilityTask_UpdatePOI;

UCLASS()
class G1R_API UGameplayAbilityTargetPOIPassive : public UGameplayAbilityTargetPointOfInterest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_UpdatePOI* m_UpdatePOITask;
    
public:
    UGameplayAbilityTargetPOIPassive();

};

