#pragma once
#include "CoreMinimal.h"
#include "BarrierCharacterStateWithSound.h"
#include "BarrierCharacterStateDomeProximity.generated.h"

UCLASS()
class UBarrierCharacterStateDomeProximity : public UBarrierCharacterStateWithSound {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool m_Active;
    
public:
    UBarrierCharacterStateDomeProximity();

};

