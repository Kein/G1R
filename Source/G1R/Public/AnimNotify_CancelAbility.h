#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_CancelAbility.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_CancelAbility : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag AbilityTagToCancel;
    
public:
    UAnimNotify_CancelAbility();

};

