#include "FPursuedCrimeSetMixins.h"

UFPursuedCrimeSetMixins::UFPursuedCrimeSetMixins() {
}

bool UFPursuedCrimeSetMixins::IsPursuingCrime(const FPursuedCrimeSet& This, FGameplayTag Crime) {
    return false;
}

bool UFPursuedCrimeSetMixins::IsPursuingAnyCrime(const FPursuedCrimeSet& This, const FGameplayTagContainer& Crimes) {
    return false;
}

bool UFPursuedCrimeSetMixins::IsPursuingAllCrimes(const FPursuedCrimeSet& This, const FGameplayTagContainer& Crimes) {
    return false;
}

bool UFPursuedCrimeSetMixins::IsEmpty(const FPursuedCrimeSet& This) {
    return false;
}

FGameplayTagContainer UFPursuedCrimeSetMixins::GetAllPursuedCrimes(const FPursuedCrimeSet& This) {
    return FGameplayTagContainer{};
}

float UFPursuedCrimeSetMixins::FindSeverityOfCrime(const FPursuedCrimeSet& This, FGameplayTag Crime) {
    return 0.0f;
}


