#pragma once
#include "CoreMinimal.h"
#include "ActionKeywords.h"
#include "SpellActionKeywords.generated.h"

class UGameplayAbilityCastSpell;
class USpellConfigurationContainer;

UCLASS()
class G1R_API USpellActionKeywords : public UActionKeywords {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayAbilityCastSpell* m_CastAbility;
    
    USpellActionKeywords();

    UFUNCTION(BlueprintCallable)
    USpellConfigurationContainer* GetSpellConfigFromContainer();
    
};

