#pragma once
#include "CoreMinimal.h"
#include "GothicLockPieceData.generated.h"

class AGothicLockPieceActor;

USTRUCT(BlueprintType)
struct FGothicLockPieceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGothicLockPieceActor* m_Plate;
    
    UPROPERTY()
    AGothicLockPieceActor* m_Bar;
    
    UPROPERTY()
    AGothicLockPieceActor* m_Latch;
    
    G1R_API FGothicLockPieceData();
};

