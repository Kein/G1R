#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AlkFilterWidgetEntry.h"
#include "AlkUserWidget.h"
#include "AlkFilterWidget.generated.h"

class UAlkFilterCategory;
class UAlkFilterWidgetFilter;
class UAlkListView;

UCLASS(EditInlineNew)
class G1R_API UAlkFilterWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSelectionChangedEventBP, FGameplayTag, _FilterTag, const FText&, _DisplayName, const FText&, _Description);
    
    UPROPERTY(BlueprintAssignable)
    FSelectionChangedEventBP m_OnSelectionChangedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UAlkListView* ListView_Filters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAlkFilterWidgetEntry> m_FilterEntries;
    
    UPROPERTY(Transient)
    TArray<UAlkFilterWidgetFilter*> m_Filters;
    
public:
    UAlkFilterWidget();

    UFUNCTION(BlueprintCallable)
    void UnmarkFilterUnseen(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintCallable)
    void UnmarkFiltersUnseen(FGameplayTagContainer _FilterTags, bool _Exclusive);
    
    UFUNCTION(BlueprintCallable)
    void ShowFilters(FGameplayTagContainer _FilterTags, bool _Exclusive);
    
    UFUNCTION(BlueprintCallable)
    void ShowFilter(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstFilter(bool _Force);
    
    UFUNCTION(BlueprintCallable)
    void SelectFilter(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFilter(FGameplayTag _FilterTag);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFiltersChanged(const TArray<UAlkFilterWidgetFilter*>& _Filters);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkFilterUnseen(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintCallable)
    void MarkFiltersUnseen(FGameplayTagContainer _FilterTags, bool _Exclusive);
    
    UFUNCTION(BlueprintCallable)
    void HideFilters(FGameplayTagContainer _FilterTags, bool _Exclusive);
    
    UFUNCTION(BlueprintCallable)
    void HideFilter(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintPure)
    bool HasVisibleFilters() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFilter(FGameplayTag _FilterTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyUnseenFilters() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetSelectedFilterTag() const;
    
    UFUNCTION(BlueprintPure)
    UAlkFilterWidgetFilter* GetSelectedFilter() const;
    
    UFUNCTION(BlueprintPure)
    UAlkFilterWidgetFilter* GetFilter(FGameplayTag _FilterTag) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableFilters(FGameplayTagContainer _FilterTags, bool _Exclusive);
    
    UFUNCTION(BlueprintCallable)
    void EnableFilter(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintCallable)
    void DisableFilters(FGameplayTagContainer _FilterTags, bool _Exclusive);
    
    UFUNCTION(BlueprintCallable)
    void DisableFilter(FGameplayTag _FilterTag);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterFromCategory(const UAlkFilterCategory* _Category, bool _OverrideExisting);
    
    UFUNCTION(BlueprintCallable)
    void AddFilter(const FAlkFilterWidgetEntry& _FilterSettings, bool _OverrideExisting);
    
};

