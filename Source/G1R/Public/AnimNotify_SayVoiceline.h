#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_SayVoiceline.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_SayVoiceline : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag VoicelineTag;
    
    UAnimNotify_SayVoiceline();

};

