#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_SaveFloat.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_SaveFloat : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_Value;
    
public:
    UAnimNotify_SaveFloat();

};

