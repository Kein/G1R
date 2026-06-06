#include "WritingUIWidget.h"
#include "Templates/SubclassOf.h"

UWritingUIWidget::UWritingUIWidget() {
    this->m_CurrentDocument = NULL;
}

void UWritingUIWidget::InitializeWriting(TSubclassOf<UWritingDocument> _Document) {
}


