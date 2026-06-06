#include "VectorMaterialPropertyProvider.h"

UVectorMaterialPropertyProvider::UVectorMaterialPropertyProvider() {
}

void UVectorMaterialPropertyProvider::SetPropertyValue(FLinearColor Value) {
}

void UVectorMaterialPropertyProvider::Reapply() const {
}

FLinearColor UVectorMaterialPropertyProvider::GetPropertyValue() const {
    return FLinearColor{};
}

FName UVectorMaterialPropertyProvider::GetPropertyName() const {
    return NAME_None;
}


