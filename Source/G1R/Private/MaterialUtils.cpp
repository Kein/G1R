#include "MaterialUtils.h"

UMaterialUtils::UMaterialUtils() {
}

void UMaterialUtils::SetMaterialInstanceStaticSwitchParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName, bool Value) {
}

bool UMaterialUtils::IsTexturePropertyOverwritten(const UMaterialInstanceConstant* MaterialInstanceConstant, FName PropertyName) {
    return false;
}

bool UMaterialUtils::IsStaticSwitchPropertyOverwritten(const UMaterialInstanceConstant* MaterialInstanceConstant, FName PropertyName) {
    return false;
}

bool UMaterialUtils::HasMaterialInstanceCompilerErrors(UMaterialInterface* MaterialInterface) {
    return false;
}

bool UMaterialUtils::GetMaterialInstanceStaticSwitchParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName) {
    return false;
}

TArray<FTextureParameterValue> UMaterialUtils::GetAllTexturesReferences(UMaterialInstanceConstant* Instance) {
    return TArray<FTextureParameterValue>();
}


