#include "DocumentWidget.h"
#include "Templates/SubclassOf.h"

UDocumentWidget::UDocumentWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PageWidgetClass = NULL;
    this->Pages = NULL;
    this->NumPageTurns = 0;
}

void UDocumentWidget::TurnToPage(int32 Page) {
}

void UDocumentWidget::TurnPageForward() {
}

void UDocumentWidget::TurnPageBackward() {
}

TArray<UDocumentPageWidget*> UDocumentWidget::GetPages() const {
    return TArray<UDocumentPageWidget*>();
}

UDocumentPageWidget* UDocumentWidget::GetOpenPage() const {
    return NULL;
}

int32 UDocumentWidget::GetNumPages() const {
    return 0;
}

bool UDocumentWidget::CanTurnPageForward() const {
    return false;
}

bool UDocumentWidget::CanTurnPageBackward() const {
    return false;
}

void UDocumentWidget::BuildFromDocumentClass(TSubclassOf<UDocument> DocumentClass) {
}

void UDocumentWidget::BuildFromDocument(UDocument* Document) {
}


