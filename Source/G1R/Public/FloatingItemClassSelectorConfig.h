#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "FloatingItemClassSelectorConfig.generated.h"

class AEffectActorBase;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UFloatingItemClassSelectorConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AEffectActorBase> m_EffectActorClassPtr;
    
public:
    UFloatingItemClassSelectorConfig();

};

