#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "EStance.h"
#include "AnimNotify_Stance.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_Stance : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EStance m_Stance;
    
public:
    UAnimNotify_Stance();

};

