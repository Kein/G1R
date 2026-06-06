#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StoryActionRegionTrait.h"
#include "SayVoicelineRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API USayVoicelineRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag VoicelineTag;
    
    USayVoicelineRegionTrait();

};

