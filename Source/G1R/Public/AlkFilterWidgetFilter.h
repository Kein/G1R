#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AlkFilterWidgetEntry.h"
#include "AlkViewItem.h"
#include "AlkFilterWidgetFilter.generated.h"

class UTexture2D;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UAlkFilterWidgetFilter : public UObject, public IAlkViewItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnseenStateChangedDelegate, bool, _IsUnseen);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnabledStateChangedDelegate, bool, _IsEnabled);
    
    UPROPERTY(BlueprintAssignable)
    FEnabledStateChangedDelegate m_OnEnabledStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FUnseenStateChangedDelegate m_OnUnseenStateChanged;
    
protected:
    UPROPERTY(Transient)
    FAlkFilterWidgetEntry m_Settings;
    
public:
    UAlkFilterWidgetFilter();

    UFUNCTION(BlueprintCallable)
    void SetVisible(bool _Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool _Enabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisibility();
    
    UFUNCTION(BlueprintCallable)
    void MarkUnseen(bool _Unseen);
    
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMarkedUnseen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSortOrder() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconSoftObjectPtr() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetFilterTag() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    

    // Fix for true pure virtual functions not being implemented
};

