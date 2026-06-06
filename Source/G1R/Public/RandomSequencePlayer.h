#pragma once
#include "CoreMinimal.h"
#include "EBreakerType.h"
#include "RandomSequencePlayer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRandomSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinTimeToBreaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxTimeToBreaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_BreakerSequenceToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_PlayBreaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBreakerType m_BreakerType;
    
    G1R_API FRandomSequencePlayer();
};

