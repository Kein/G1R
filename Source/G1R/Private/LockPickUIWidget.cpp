#include "LockPickUIWidget.h"
#include "Templates/SubclassOf.h"

ULockPickUIWidget::ULockPickUIWidget() {
    this->m_LockPickUIHint = ELockPickUIHint::None;
    this->m_LockDifficulty = 0;
}



UInventorySlotData* ULockPickUIWidget::CreateSlotDataForItemDefinition(TSubclassOf<UItemDefinition> ItemDefinitionClass) const {
    return NULL;
}

bool ULockPickUIWidget::CheckHasAnyLockpickingSkills() const {
    return false;
}


