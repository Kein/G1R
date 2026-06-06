#include "GlossarySlotWidget.h"
#include "Templates/SubclassOf.h"

UGlossarySlotWidget::UGlossarySlotWidget() {
}

bool UGlossarySlotWidget::IsUnseen(const UGlossaryDocument* _Document) const {
    return false;
}

UGlossarySubcategory* UGlossarySlotWidget::GetSubcategoryDefaultObject(TSubclassOf<UGlossarySubcategory> _Subcategory) const {
    return NULL;
}


