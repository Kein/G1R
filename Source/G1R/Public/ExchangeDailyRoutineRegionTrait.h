#pragma once
#include "CoreMinimal.h"
#include "StoryActionRegionTrait.h"
#include "Templates/SubclassOf.h"
#include "ExchangeDailyRoutineRegionTrait.generated.h"

class UAIState_DailyRoutine;

UCLASS(EditInlineNew)
class G1R_API UExchangeDailyRoutineRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, TSubclassOf<UAIState_DailyRoutine>> NewRoutineByCharacterUniqueName;
    
    UExchangeDailyRoutineRegionTrait();

};

