#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_SetTagState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_SetTagState : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_TagState;
    
public:
    UAnimNotifyState_SetTagState();

};

