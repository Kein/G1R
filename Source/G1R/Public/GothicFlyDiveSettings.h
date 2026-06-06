#pragma once
#include "CoreMinimal.h"
#include "EAdaptZDivergeMode.h"
#include "EFlyDiveMode.h"
#include "GothicFlyDiveSettings.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FGothicFlyDiveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UseFlyDiveMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundedMoveBeforeGoalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterZDivergeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdaptToCollisionSampleZDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinFocusSampleDistance;
    
    UPROPERTY()
    float AdaptToNavLinkEndZInterpDistance;
    
    UPROPERTY(BlueprintReadOnly)
    EFlyDiveMode FlyDiveMode;
    
    UPROPERTY(BlueprintReadOnly)
    EAdaptZDivergeMode AdaptZDivergeMode;
    
    UPROPERTY()
    TWeakObjectPtr<ACharacter> RelativeZDivegeCharacter;
    
    G1R_API FGothicFlyDiveSettings();
};

