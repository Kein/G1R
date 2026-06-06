#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_Block.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_Block : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_NewState;
    
public:
    UAnimNotify_Block();

};

