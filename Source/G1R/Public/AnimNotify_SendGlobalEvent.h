#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_SendGlobalEvent.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_SendGlobalEvent : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FGameplayTag m_EventTag;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FName m_EventName;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float m_NewValue;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool m_Forced;
    
    UAnimNotify_SendGlobalEvent();

};

