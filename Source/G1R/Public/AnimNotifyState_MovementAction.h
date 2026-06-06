#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "EMovementAction.h"
#include "AnimNotifyState_MovementAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_MovementAction : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EMovementAction m_MovementAction;
    
public:
    UAnimNotifyState_MovementAction();

};

