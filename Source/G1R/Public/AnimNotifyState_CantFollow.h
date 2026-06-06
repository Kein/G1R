#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_SetTagState.h"
#include "AnimNotifyState_CantFollow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_CantFollow : public UAnimNotifyState_SetTagState {
    GENERATED_BODY()
public:
    UAnimNotifyState_CantFollow();

};

