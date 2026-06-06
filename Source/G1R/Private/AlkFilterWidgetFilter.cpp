#include "AlkFilterWidgetFilter.h"

UAlkFilterWidgetFilter::UAlkFilterWidgetFilter() {
}

void UAlkFilterWidgetFilter::SetVisible(bool _Visible) {
}

void UAlkFilterWidgetFilter::SetEnabled(bool _Enabled) {
}

void UAlkFilterWidgetFilter::ResetVisibility() {
}

void UAlkFilterWidgetFilter::MarkUnseen(bool _Unseen) {
}

bool UAlkFilterWidgetFilter::IsVisible() const {
    return false;
}

bool UAlkFilterWidgetFilter::IsValid() const {
    return false;
}

bool UAlkFilterWidgetFilter::IsMarkedUnseen() const {
    return false;
}

bool UAlkFilterWidgetFilter::IsEnabled() const {
    return false;
}

int32 UAlkFilterWidgetFilter::GetSortOrder() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UAlkFilterWidgetFilter::GetIconSoftObjectPtr() const {
    return NULL;
}

FGameplayTag UAlkFilterWidgetFilter::GetFilterTag() const {
    return FGameplayTag{};
}

FText UAlkFilterWidgetFilter::GetDisplayName() const {
    return FText::GetEmpty();
}

FText UAlkFilterWidgetFilter::GetDescription() const {
    return FText::GetEmpty();
}


