#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Stat.h"
#include "StatValue.generated.h"

UCLASS(BlueprintType)
class G1R_API UStatValue : public UObject, public IStat {
    GENERATED_BODY()
public:
    UStatValue();

    UFUNCTION(BlueprintPure)
    float GetStatValue() const;
    
    UFUNCTION(BlueprintPure)
    FName GetStatName() const;
    

    // Fix for true pure virtual functions not being implemented
};

