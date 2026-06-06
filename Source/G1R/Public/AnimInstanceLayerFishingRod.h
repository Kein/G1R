#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFishingState.h"
#include "LinkedAnimInstance.h"
#include "AnimInstanceLayerFishingRod.generated.h"

UCLASS(NonTransient)
class G1R_API UAnimInstanceLayerFishingRod : public ULinkedAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFishingState m_FishingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_CurrentDirection;
    
public:
    UAnimInstanceLayerFishingRod();

};

