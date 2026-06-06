#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_Interact.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_Interact : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_InteractTag;
    
    UPROPERTY(EditAnywhere)
    float m_EventMagnitude;
    
public:
    UAnimNotify_Interact();

};

