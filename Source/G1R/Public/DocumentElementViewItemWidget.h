#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ViewItemWidget.h"
#include "DocumentElementViewItemWidget.generated.h"

class UDocumentElementImage;
class UTexture2D;

UCLASS(EditInlineNew)
class G1R_API UDocumentElementViewItemWidget : public UViewItemWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<UDocumentElementImage> m_Image;
    
public:
    UDocumentElementViewItemWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionHeadingSet(const FText& _Text, FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuoteSet(const FText& _Text, const FText& _Source, FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnParagraphSet(const FText& _Text, FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPageBreakSet(FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnImageSet(const TSoftObjectPtr<UTexture2D>& _Image, const FText& _Caption, FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnumeratedListSet(const TArray<FText>& _Entries, FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChapterHeadingSet(const FText& _Text, FGameplayTag _Style);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBulletListSet(const TArray<FText>& _Entries, FGameplayTag _Style);
    
};

