#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "MoveFromBoneToBone.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UMoveFromBoneToBone : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_FromBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ToBone;
    
public:
    UMoveFromBoneToBone();

};

