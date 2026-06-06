#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_PlayCue.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_PlayCue : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_CueTag;
    
    UPROPERTY(EditAnywhere)
    float m_Level;
    
public:
    UAnimNotifyState_PlayCue();

};

