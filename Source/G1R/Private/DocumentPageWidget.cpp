#include "DocumentPageWidget.h"

UDocumentPageWidget::UDocumentPageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PageContents = NULL;
}

UDocumentElementWidget* UDocumentPageWidget::CreateWidgetForElement(UDocumentElement* Section) {
    return NULL;
}

UDocumentElementWidget* UDocumentPageWidget::AddSectionToPage(UDocumentElement* Section) {
    return NULL;
}


