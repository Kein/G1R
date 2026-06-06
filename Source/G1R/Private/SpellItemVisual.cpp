#include "SpellItemVisual.h"

ASpellItemVisual::ASpellItemVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MagicVFXIntensity = 5.00f;
}

void ASpellItemVisual::SetMagicVFXColor(FLinearColor NewColor) {
}

void ASpellItemVisual::SetMagicIntensity(float NewIntensity) {
}

FLinearColor ASpellItemVisual::GetMagicVfxColor() const {
    return FLinearColor{};
}

float ASpellItemVisual::GetMagicIntensity() const {
    return 0.0f;
}


