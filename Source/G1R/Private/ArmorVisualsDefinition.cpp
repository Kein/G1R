#include "ArmorVisualsDefinition.h"

UArmorVisualsDefinition::UArmorVisualsDefinition() {
    this->m_HasPreBakedSK = false;
    this->m_UpperTeethOffset = 0.00f;
    this->m_CharacterVisualFeatures = NULL;
}

TSoftObjectPtr<USkeletalMesh> UArmorVisualsDefinition::GetPrebakedSKsAssetSoftPtr(const FString& facename) const {
    return NULL;
}

TSoftObjectPtr<UCustomizableObject> UArmorVisualsDefinition::GetMutableAssetSoftPtr() const {
    return NULL;
}

TSoftObjectPtr<UFggto> UArmorVisualsDefinition::GetGTOAssetSoftPtr(const FString& facename) const {
    return NULL;
}


