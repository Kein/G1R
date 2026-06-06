#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateFishingBait.generated.h"

class UCarryComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateFishingBait : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
public:
    UAbilityTask_UpdateFishingBait();

};

