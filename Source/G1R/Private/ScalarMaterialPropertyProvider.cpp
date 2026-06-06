#include "ScalarMaterialPropertyProvider.h"

UScalarMaterialPropertyProvider::UScalarMaterialPropertyProvider() {
    this->PropertyValue = 0.00f;
}

void UScalarMaterialPropertyProvider::SetPropertyValue(float Value) {
}

void UScalarMaterialPropertyProvider::Reapply() const {
}

float UScalarMaterialPropertyProvider::GetPropertyValue() const {
    return 0.0f;
}

FName UScalarMaterialPropertyProvider::GetPropertyName() const {
    return NAME_None;
}


