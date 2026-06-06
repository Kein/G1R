#include "MultipleMaterialPropertyProvider.h"

UMultipleMaterialPropertyProvider::UMultipleMaterialPropertyProvider() {
}

TArray<TScriptInterface<IMaterialPropertyProvider>> UMultipleMaterialPropertyProvider::CreateProviderArray() {
    return TArray<TScriptInterface<IMaterialPropertyProvider>>();
}

void UMultipleMaterialPropertyProvider::AddVector(FName Name, FLinearColor Value) {
}

void UMultipleMaterialPropertyProvider::AddTexture(FName Name, UTexture* Value) {
}

void UMultipleMaterialPropertyProvider::AddScalar(FName Name, float Value) {
}


