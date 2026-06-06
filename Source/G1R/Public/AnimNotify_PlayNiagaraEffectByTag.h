#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "AnimNotify_PlayNiagaraEffectByTag.generated.h"

class UNiagaraSystem;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_PlayNiagaraEffectByTag : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagToCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* TemplateWithTag;
    
    UAnimNotify_PlayNiagaraEffectByTag();

};

