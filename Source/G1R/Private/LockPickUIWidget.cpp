#include "LockPickUIWidget.h"
#include "Templates/SubclassOf.h"

ULockPickUIWidget::ULockPickUIWidget() {
    this->m_LockPickUIHint = ELockPickUIHint::None;
}



UInventorySlotData* ULockPickUIWidget::CreateSlotDataForItemDefinition(TSubclassOf<UItemDefinition> ItemDefinitionClass) const {
    return NULL;
}

bool ULockPickUIWidget::CheckHasAnyLockpickingSkills() const {
    return false;
}


