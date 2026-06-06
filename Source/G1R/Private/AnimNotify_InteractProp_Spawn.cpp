#include "AnimNotify_InteractProp_Spawn.h"

UAnimNotify_InteractProp_Spawn::UAnimNotify_InteractProp_Spawn() {
    this->m_StaticMesh = NULL;
    this->ItemVisualClass = NULL;
    this->m_DontDuplicate = true;
    this->m_InventoryHidde = EInventoryTypes::None;
}


