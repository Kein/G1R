#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_StopFX.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_StopFX : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag EffectTag;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreSpecs;
    
public:
    UAnimNotify_StopFX();

};

