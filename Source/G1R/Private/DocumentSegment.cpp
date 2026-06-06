#include "DocumentSegment.h"

UDocumentSegment::UDocumentSegment() {
    this->InDocument = NULL;
}

void UDocumentSegment::BuildSegment_Implementation(const AGothicCharacterState* Reader) {
}

bool UDocumentSegment::BP_PassesUnlockConditions_Implementation(const AGothicCharacterState* Reader) const {
    return false;
}



UDocumentElementSectionHeading* UDocumentSegment::AddSectionHeading(const FText& Text) {
    return NULL;
}

UDocumentElementQuote* UDocumentSegment::AddQuote(const FText& QuoteText, const FText& QuoteSource) {
    return NULL;
}

UDocumentElementParagraph* UDocumentSegment::AddParagraph(const FText& Text) {
    return NULL;
}

UDocumentElementPageBreak* UDocumentSegment::AddPageBreak() {
    return NULL;
}

UDocumentElementImage* UDocumentSegment::AddImage(const TSoftObjectPtr<UTexture2D>& Image, const FText& ImageCaptionText) {
    return NULL;
}

UDocumentElementEnumeratedList* UDocumentSegment::AddEnumeratedListEntry(const FText& Text) {
    return NULL;
}

UDocumentElementChapterHeading* UDocumentSegment::AddChapterHeading(const FText& Text) {
    return NULL;
}

UDocumentElementBulletList* UDocumentSegment::AddBulletListEntry(const FText& Text) {
    return NULL;
}


