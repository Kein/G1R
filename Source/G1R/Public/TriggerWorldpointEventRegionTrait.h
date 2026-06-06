#pragma once
#include "CoreMinimal.h"
#include "StoryActionRegionTrait.h"
#include "TriggerWorldpointEventRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UTriggerWorldpointEventRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WorldPointEventName;
    
    UTriggerWorldpointEventRegionTrait();

};

