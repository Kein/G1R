#pragma once
#include "CoreMinimal.h"
#include "ScriptGameplayEffect.h"
#include "GameplayEffect_SkillGeneric.generated.h"

UCLASS()
class G1R_API UGameplayEffect_SkillGeneric : public UScriptGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SPCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 oreCost;
    
    UGameplayEffect_SkillGeneric();

};

