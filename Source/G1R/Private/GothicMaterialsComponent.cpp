#include "GothicMaterialsComponent.h"

UGothicMaterialsComponent::UGothicMaterialsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = NULL;
}

void UGothicMaterialsComponent::SetSweatIntensity(float Amount) {
}

float UGothicMaterialsComponent::GetSweatIntensity() {
    return 0.0f;
}

TArray<UMaterialInstanceDynamic*> UGothicMaterialsComponent::GetDynamicMaterials() {
    return TArray<UMaterialInstanceDynamic*>();
}

TScriptInterface<IDisposable> UGothicMaterialsComponent::EnqueueModifyWithCustomDynamic(const TScriptInterface<IMaterialPropertyProvider>& PropertyProvider, bool IsDynamic) {
    return NULL;
}

TScriptInterface<IDisposable> UGothicMaterialsComponent::EnqueueModify(TScriptInterface<IMaterialPropertyProvider> PropertyProvider) {
    return NULL;
}

TScriptInterface<IDisposable> UGothicMaterialsComponent::EnqueueDynamicModify(TScriptInterface<IMaterialPropertyProvider> PropertyProvider) {
    return NULL;
}


