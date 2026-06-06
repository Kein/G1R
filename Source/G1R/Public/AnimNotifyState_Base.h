#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_Base.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UAnimNotifyState_Base : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_Base();

};

