#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_ExecuteCue.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_ExecuteCue : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_CueTag;
    
    UPROPERTY(EditAnywhere)
    float m_Level;
    
public:
    UAnimNotify_ExecuteCue();

};

