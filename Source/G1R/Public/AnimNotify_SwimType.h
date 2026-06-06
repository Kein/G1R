#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "ESwimType.h"
#include "AnimNotify_SwimType.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_SwimType : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESwimType m_SwimType;
    
public:
    UAnimNotify_SwimType();

};

