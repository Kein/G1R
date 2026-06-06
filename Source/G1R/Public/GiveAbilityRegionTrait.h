#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "StoryActionRegionTrait.h"
#include "Templates/SubclassOf.h"
#include "GiveAbilityRegionTrait.generated.h"

class UGameplayAbility;

UCLASS(EditInlineNew)
class G1R_API UGiveAbilityRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TSet<FGameplayAbilitySpecHandle> GivenAbilitySpecs;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayAbility> AbilityToGive;
    
    UPROPERTY(EditAnywhere)
    int32 AbilityLevel;
    
    UPROPERTY(EditAnywhere)
    bool bActivateOnGive;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveOnLeave;
    
public:
    UGiveAbilityRegionTrait();

};

