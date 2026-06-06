#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_MoveFromBoneToBone.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_MoveFromBoneToBone : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_FromBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ToBone;
    
public:
    UAnimNotify_MoveFromBoneToBone();

};

