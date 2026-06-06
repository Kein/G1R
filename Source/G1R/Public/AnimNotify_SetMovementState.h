#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "EMovementState.h"
#include "AnimNotify_SetMovementState.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_SetMovementState : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMovementState m_MovementState;
    
    UAnimNotify_SetMovementState();

};

