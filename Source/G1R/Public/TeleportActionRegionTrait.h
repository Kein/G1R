#pragma once
#include "CoreMinimal.h"
#include "InteractionSpotHandle.h"
#include "StoryActionRegionTrait.h"
#include "Templates/SubclassOf.h"
#include "TeleportActionRegionTrait.generated.h"

class UAIState_DailyRoutine;

UCLASS(EditInlineNew)
class G1R_API UTeleportActionRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TeleportCharacterUniqueName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIState_DailyRoutine> DailyRoutineAfterTeleport;
    
    UPROPERTY(EditAnywhere)
    FInteractionSpotHandle TargetSpot;
    
    UPROPERTY(EditAnywhere)
    bool bKeepDefeatedStateAfterTeleport;
    
    UTeleportActionRegionTrait();

};

