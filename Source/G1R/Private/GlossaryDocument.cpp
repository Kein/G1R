#include "GlossaryDocument.h"

UGlossaryDocument::UGlossaryDocument() {
    this->m_CategoryClass = NULL;
    this->m_SortOrder = 0;
}

bool UGlossaryDocument::HasInitialSegment() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UGlossaryDocument::GetCategoryIconImage() const {
    return NULL;
}

FGameplayTag UGlossaryDocument::GetCategoryFilterTag() const {
    return FGameplayTag{};
}

FText UGlossaryDocument::GetCategoryDisplayName() const {
    return FText::GetEmpty();
}

FText UGlossaryDocument::GetCategoryDescription() const {
    return FText::GetEmpty();
}


