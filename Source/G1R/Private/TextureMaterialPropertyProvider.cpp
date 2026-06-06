#include "TextureMaterialPropertyProvider.h"

UTextureMaterialPropertyProvider::UTextureMaterialPropertyProvider() {
    this->PropertyValue = NULL;
}

void UTextureMaterialPropertyProvider::SetPropertyValue(UTexture* Value) {
}

UTexture* UTextureMaterialPropertyProvider::GetPropertyValue() const {
    return NULL;
}

FName UTextureMaterialPropertyProvider::GetPropertyName() const {
    return NAME_None;
}


