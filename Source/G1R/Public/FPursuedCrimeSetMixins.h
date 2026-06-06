#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PursuedCrimeSet.h"
#include "FPursuedCrimeSetMixins.generated.h"

UCLASS(BlueprintType)
class UFPursuedCrimeSetMixins : public UObject {
    GENERATED_BODY()
public:
    UFPursuedCrimeSetMixins();

    UFUNCTION(BlueprintCallable)
    static bool IsPursuingCrime(const FPursuedCrimeSet& This, FGameplayTag Crime);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPursuingAnyCrime(const FPursuedCrimeSet& This, const FGameplayTagContainer& Crimes);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPursuingAllCrimes(const FPursuedCrimeSet& This, const FGameplayTagContainer& Crimes);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEmpty(const FPursuedCrimeSet& This);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetAllPursuedCrimes(const FPursuedCrimeSet& This);
    
    UFUNCTION(BlueprintCallable)
    static float FindSeverityOfCrime(const FPursuedCrimeSet& This, FGameplayTag Crime);
    
};

