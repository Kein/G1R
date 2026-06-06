#include "GlossaryMainWidget.h"

UGlossaryMainWidget::UGlossaryMainWidget() {
    this->GenericFilter = NULL;
    this->SubfilterWidget = NULL;
}

void UGlossaryMainWidget::UpdateFilterWidget() {
}

void UGlossaryMainWidget::SelectFilterForDocument(FGameplayTag _FallbackFilterTag, const UGlossaryDocument* _Document) {
}

int32 UGlossaryMainWidget::GetIndexOfDocument(UDiscreteItemViewWidget* _ItemView, const UGlossaryDocument* _Document) const {
    return 0;
}

TArray<UGlossaryDocument*> UGlossaryMainWidget::GetDocuments(FGameplayTag _FilterTag, FGameplayTag _SubfilterTag) const {
    return TArray<UGlossaryDocument*>();
}


