#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GlossaryWidgetBucket.h"
#include "ManagementContentWidgetBase.h"
#include "GlossaryMainWidget.generated.h"

class UAlkFilterWidget;
class UDiscreteItemViewWidget;
class UGlossaryDocument;
class UGlossarySubfilterWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class G1R_API UGlossaryMainWidget : public UManagementContentWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UAlkFilterWidget* GenericFilter;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UGlossarySubfilterWidget* SubfilterWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_DefaultFilterIcon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FGlossaryWidgetBucket> m_Buckets;
    
public:
    UGlossaryMainWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFilterWidget();
    
    UFUNCTION(BlueprintCallable)
    void SelectFilterForDocument(FGameplayTag _FallbackFilterTag, const UGlossaryDocument* _Document);
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexOfDocument(UDiscreteItemViewWidget* _ItemView, const UGlossaryDocument* _Document) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UGlossaryDocument*> GetDocuments(FGameplayTag _FilterTag, FGameplayTag _SubfilterTag) const;
    
};

