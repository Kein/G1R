#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_GameplayCueEvent.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_GameplayCueEvent : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_CueTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGameplayCueEvent::Type> m_Event;
    
    UPROPERTY(EditAnywhere)
    bool m_ShouldConsiderChildTags;
    
    UPROPERTY(EditAnywhere)
    float m_Level;
    
public:
    UAnimNotify_GameplayCueEvent();

};

