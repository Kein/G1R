#pragma once
#include "CoreMinimal.h"
#include "InputSet.h"
#include "InputProfile.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FInputProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FInputSet> InputSets;
    
    FInputProfile();
};

