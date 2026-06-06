#include "MaterialModifier.h"

UMaterialModifier::UMaterialModifier() {
    this->State = ModifyState::Idle;
}

void UMaterialModifier::RegisterModifier(TScriptInterface<IMaterialPropertyModifier> Modify) {
}

void UMaterialModifier::ExecutePropertyModify(const TScriptInterface<IMaterialPropertyModifier>& Modifier) {
}

void UMaterialModifier::Dispose_Implementation() {
}

void UMaterialModifier::Apply() {
}


