#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_GameplayMessage.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_GameplayMessage : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_InteractTag;
    
    UPROPERTY(EditAnywhere)
    float m_EventMagnitude;
    
    UPROPERTY(EditAnywhere)
    FName m_MessageName;
    
public:
    UAnimNotify_GameplayMessage();

};

