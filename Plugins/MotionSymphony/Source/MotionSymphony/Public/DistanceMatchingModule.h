#pragma once
#include "CoreMinimal.h"
#include "DistanceMatchingModule.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FDistanceMatchingModule {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimSequenceBase* AnimSequence;
    
    FDistanceMatchingModule();
};

