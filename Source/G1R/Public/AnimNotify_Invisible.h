#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_Invisible.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_Invisible : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool M_Invisible;
    
public:
    UAnimNotify_Invisible();

};

