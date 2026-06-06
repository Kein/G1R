#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPerceptionSense.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "PursuedCrimeSet.h"
#include "PerceivedAgent.generated.h"

class AGothicCharacterState;

USTRUCT(BlueprintType)
struct G1R_API FPerceivedAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector AtPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector AtNavPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite)
    EPerceptionSense ViaSense;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationship Relationship;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipHostility Hostility;
    
    UPROPERTY(BlueprintReadWrite)
    ERelationshipRelativeRank RelativeRank;
    
    UPROPERTY(BlueprintReadWrite)
    FPursuedCrimeSet CrimesPursuedBySensor;
    
    UPROPERTY(BlueprintReadWrite)
    AGothicCharacterState* RepresentedCharacterState;
    
    UPROPERTY(BlueprintReadWrite)
    float Awareness;
    
    FPerceivedAgent();
};

