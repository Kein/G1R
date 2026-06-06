#pragma once
#include "CoreMinimal.h"
#include "InteractionSpotRequirements.h"
#include "UniqueNameRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FUniqueNameRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FName> MustHaveAnyOfTheseUniqueNames;
    
    FUniqueNameRequirements();
};

