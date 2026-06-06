#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BarrierCharacterState.h"
#include "BarrierCharacterStateWithSound.generated.h"

UCLASS()
class UBarrierCharacterStateWithSound : public UBarrierCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTransform BarrierTransform;
    
    UPROPERTY()
    float BarrierRadius;
    
public:
    UBarrierCharacterStateWithSound();

};

