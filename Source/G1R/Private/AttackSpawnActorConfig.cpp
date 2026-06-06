#include "AttackSpawnActorConfig.h"
#include "Templates/SubclassOf.h"

UAttackSpawnActorConfig::UAttackSpawnActorConfig() {
}

FName UAttackSpawnActorConfig::GetSocketName() const {
    return NAME_None;
}

UAnimMontage* UAttackSpawnActorConfig::GetAttackMontage() const {
    return NULL;
}

TSubclassOf<AActor> UAttackSpawnActorConfig::GetActorClass() const {
    return NULL;
}

AActor* UAttackSpawnActorConfig::GetActor() const {
    return NULL;
}


