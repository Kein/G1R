#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OwnedLooseGameplayTags.h"
#include "RegionTrait.h"
#include "OwnedTagRegionTrait.generated.h"

class UAbilitySystemComponent;

UCLASS(EditInlineNew)
class G1R_API UOwnedTagRegionTrait : public URegionTrait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UAbilitySystemComponent*, FOwnedLooseGameplayTags> AppliedTagsByASC;
    
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TagsToApplyOnEnter;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ApplyToCharactersEnteringWith;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoreCharactersEnteringWith;
    
    UOwnedTagRegionTrait();

};

