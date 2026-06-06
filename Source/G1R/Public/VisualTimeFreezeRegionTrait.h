#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "StoryActionRegionTrait.h"
#include "VisualTimeFreezeRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UVisualTimeFreezeRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInGameTime FrozenTime;
    
public:
    UVisualTimeFreezeRegionTrait();

};

