#include "AlkFilterCategory.h"

UAlkFilterCategory::UAlkFilterCategory() {
    this->m_SortOrder = 1;
}

int32 UAlkFilterCategory::GetSortOrder() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UAlkFilterCategory::GetIconImage() const {
    return NULL;
}

FGameplayTag UAlkFilterCategory::GetFilterTag() const {
    return FGameplayTag{};
}

FText UAlkFilterCategory::GetDisplayName() const {
    return FText::GetEmpty();
}

FText UAlkFilterCategory::GetDescription() const {
    return FText::GetEmpty();
}


