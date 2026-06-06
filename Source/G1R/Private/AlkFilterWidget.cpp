#include "AlkFilterWidget.h"

UAlkFilterWidget::UAlkFilterWidget() {
    this->ListView_Filters = NULL;
}

void UAlkFilterWidget::UnmarkFilterUnseen(FGameplayTag _FilterTag) {
}

void UAlkFilterWidget::UnmarkFiltersUnseen(FGameplayTagContainer _FilterTags, bool _Exclusive) {
}

void UAlkFilterWidget::ShowFilters(FGameplayTagContainer _FilterTags, bool _Exclusive) {
}

void UAlkFilterWidget::ShowFilter(FGameplayTag _FilterTag) {
}

void UAlkFilterWidget::SelectFirstFilter(bool _Force) {
}

void UAlkFilterWidget::SelectFilter(FGameplayTag _FilterTag) {
}

void UAlkFilterWidget::RemoveFilter(FGameplayTag _FilterTag) {
}


void UAlkFilterWidget::MarkFilterUnseen(FGameplayTag _FilterTag) {
}

void UAlkFilterWidget::MarkFiltersUnseen(FGameplayTagContainer _FilterTags, bool _Exclusive) {
}

void UAlkFilterWidget::HideFilters(FGameplayTagContainer _FilterTags, bool _Exclusive) {
}

void UAlkFilterWidget::HideFilter(FGameplayTag _FilterTag) {
}

bool UAlkFilterWidget::HasVisibleFilters() const {
    return false;
}

bool UAlkFilterWidget::HasFilter(FGameplayTag _FilterTag) const {
    return false;
}

bool UAlkFilterWidget::HasAnyUnseenFilters() const {
    return false;
}

FGameplayTag UAlkFilterWidget::GetSelectedFilterTag() const {
    return FGameplayTag{};
}

UAlkFilterWidgetFilter* UAlkFilterWidget::GetSelectedFilter() const {
    return NULL;
}

UAlkFilterWidgetFilter* UAlkFilterWidget::GetFilter(FGameplayTag _FilterTag) const {
    return NULL;
}

void UAlkFilterWidget::EnableFilters(FGameplayTagContainer _FilterTags, bool _Exclusive) {
}

void UAlkFilterWidget::EnableFilter(FGameplayTag _FilterTag) {
}

void UAlkFilterWidget::DisableFilters(FGameplayTagContainer _FilterTags, bool _Exclusive) {
}

void UAlkFilterWidget::DisableFilter(FGameplayTag _FilterTag) {
}

void UAlkFilterWidget::AddFilterFromCategory(const UAlkFilterCategory* _Category, bool _OverrideExisting) {
}

void UAlkFilterWidget::AddFilter(const FAlkFilterWidgetEntry& _FilterSettings, bool _OverrideExisting) {
}


