#include "GameplayAbilitySpellCommonProjectile.h"

UGameplayAbilitySpellCommonProjectile::UGameplayAbilitySpellCommonProjectile() {
    this->m_MinDistanceToAvoidShootingWhenTargetIsNotAccessible = 50.00f;
}

void UGameplayAbilitySpellCommonProjectile::PlayLaunchSpellMontage_Scriptable(FName SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale) {
}

void UGameplayAbilitySpellCommonProjectile::PlayEndAbilityMontages() {
}


bool UGameplayAbilitySpellCommonProjectile::IsAccesible_Scriptable_Implementation(AGothicCharacter* Character, const FVector& LocationToSpawn, USpellProjectileDefinition* ProjectileDefinition, FVector& TargetLocation, FHitResult& OutHitResult) {
    return false;
}

void UGameplayAbilitySpellCommonProjectile::ClientPlayLaunchSpell_Implementation(FName SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale) {
}

void UGameplayAbilitySpellCommonProjectile::ClientPlayFailAbilityMontage_Implementation() {
}

void UGameplayAbilitySpellCommonProjectile::ClientPlayEndSpellMontage_Implementation() {
}


