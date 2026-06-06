#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "ESlimeManagerActions.h"
#include "ESlimeName.h"
#include "AnimNotify_Slime.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_Slime : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESlimeManagerActions m_SlimeAction;
    
    UPROPERTY(EditAnywhere)
    ESlimeName m_SlimeName;
    
public:
    UAnimNotify_Slime();

};

