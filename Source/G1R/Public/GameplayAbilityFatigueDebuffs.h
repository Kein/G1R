#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityFatigueEffects.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityFatigueDebuffs.generated.h"

class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityFatigueDebuffs : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, FGameplayAbilityFatigueEffects> m_EffectsForThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UScriptGameplayEffect> m_RefreshAttributesEffect;
    
public:
    UGameplayAbilityFatigueDebuffs();

};

