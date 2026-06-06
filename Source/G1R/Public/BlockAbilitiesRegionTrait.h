#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StoryActionRegionTrait.h"
#include "BlockAbilitiesRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UBlockAbilitiesRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockAbilitiesWithTags;
    
    UPROPERTY(EditAnywhere)
    bool bCancelBlockedAbilitiesIfActive;
    
public:
    UBlockAbilitiesRegionTrait();

};

