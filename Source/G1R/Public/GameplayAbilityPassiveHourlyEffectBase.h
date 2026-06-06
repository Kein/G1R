#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayAbilityBase.h"
#include "InGameTime.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityPassiveHourlyEffectBase.generated.h"

class UScriptGameplayEffect;

UCLASS(Abstract)
class G1R_API UGameplayAbilityPassiveHourlyEffectBase : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UScriptGameplayEffect> m_HourlyEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayAttribute m_HourlyEffectPeriodInHoursAttribute;
    
public:
    UGameplayAbilityPassiveHourlyEffectBase();

protected:
    UFUNCTION()
    void OnNextHourlyEffectGameTimeReached(const FInGameTime& TimeReached);
    
};

