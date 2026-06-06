#include "SpellProjectileVisual.h"

ASpellProjectileVisual::ASpellProjectileVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ProjectileProfileName = TEXT("SpellProjectileProfile");
}

void ASpellProjectileVisual::Update_Scriptable_Implementation(float DeltaSeconds) {
}


