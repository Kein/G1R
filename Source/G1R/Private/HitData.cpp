#include "HitData.h"

UHitData::UHitData() {
}

UAnimMontage* UHitData::GetSwimDeathAnimMontage() const {
    return NULL;
}

UAnimMontage* UHitData::GetRidingDeathAnimMontage(FGameplayTag Direction) const {
    return NULL;
}

UAnimMontage* UHitData::GetHitAnimMontage(const FGameplayTagContainer& MatchAllExact) const {
    return NULL;
}

UAnimMontage* UHitData::GetDrownAnimMontage() const {
    return NULL;
}

UAnimMontage* UHitData::GetDefeatedStandUpMontage(FGameplayTagContainer& MetaData) const {
    return NULL;
}

UAnimMontage* UHitData::GetDefeatedRandomLoopMontage(FGameplayTagContainer& MetaData) const {
    return NULL;
}

UAnimMontage* UHitData::GetDefeatedAnimMontage(const FGameplayTagContainer& MatchAllExact) const {
    return NULL;
}

UAnimMontage* UHitData::GetDeathFromDefeatedAnimMontage(FGameplayTagContainer& MetaData) const {
    return NULL;
}

UAnimMontage* UHitData::GetDeathAnimMontage() const {
    return NULL;
}

void UHitData::EmptyDeathArray() {
}

void UHitData::AddRidingDeath(FGameplayTag Direction, FName Montage) {
}

void UHitData::AddHit(FGameplayTagContainer& MetaData, FName Montage) {
}

void UHitData::AddDefeatedStandUpMontage(FGameplayTagContainer& MetaData, FName Montage) {
}

void UHitData::AddDefeatedLoopMontage(FGameplayTagContainer& MetaData, FName Montage) {
}

void UHitData::AddDefeatedHitMontage(FGameplayTagContainer& MetaData, FName Montage) {
}

void UHitData::AddDeathFromExecutionMontage(FName Montage) {
}

void UHitData::AddDeathFromDefeatedMontage(FGameplayTagContainer& MetaData, FName Montage) {
}

void UHitData::AddDeath(FName Montage) {
}


