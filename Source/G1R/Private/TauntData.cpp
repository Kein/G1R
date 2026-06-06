#include "TauntData.h"

UTauntData::UTauntData() {
}

UAnimMontage* UTauntData::GetTauntMontageMatchingAny(FGameplayTagContainer& Out_MontageTags, const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked) {
    return NULL;
}

UAnimMontage* UTauntData::GetTauntMontageMatchingAllAndAny(FGameplayTagContainer& Out_MontageTags, const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked) {
    return NULL;
}

UAnimMontage* UTauntData::GetTauntMontageMatchingAll(FGameplayTagContainer& Out_MontageTags, const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& bLocked) {
    return NULL;
}

void UTauntData::Clear() {
}

bool UTauntData::CheckTauntAvailableMatchingAny(const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked) {
    return false;
}

bool UTauntData::CheckTauntAvailableMatchingAllAndAny(const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked) {
    return false;
}

bool UTauntData::CheckTauntAvailableMatchingAll(const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& bLocked) {
    return false;
}

void UTauntData::AddTauntByTag(FGameplayTag GameplayTag, FName Montage) {
}

void UTauntData::AddTauntByReference(FGameplayTagContainer MetaData, TSoftObjectPtr<UAnimMontage> Montage) {
}

void UTauntData::AddTaunt(FGameplayTagContainer MetaData, FName Montage) {
}


