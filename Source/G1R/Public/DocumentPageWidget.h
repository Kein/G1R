#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "DocumentPageWidget.generated.h"

class UDocumentElement;
class UDocumentElementChapterHeadingWidget;
class UDocumentElementImageWidget;
class UDocumentElementListWidget;
class UDocumentElementParagraphWidget;
class UDocumentElementQuoteWidget;
class UDocumentElementSectionHeadingWidget;
class UDocumentElementWidget;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentPageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPanelWidget* PageContents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementParagraphWidget>> ParagraphWidgetClassByStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementChapterHeadingWidget>> ChapterHeadingWidgetClassByStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementSectionHeadingWidget>> SectionHeadingWidgetClassByStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementQuoteWidget>> QuoteWidgetClassByStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementImageWidget>> ImageWidgetClassByStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementListWidget>> EnumeratedListWidgetClassByStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UDocumentElementListWidget>> BulletListWidgetClassByStyle;
    
    UDocumentPageWidget();

protected:
    UFUNCTION(BlueprintCallable)
    UDocumentElementWidget* CreateWidgetForElement(UDocumentElement* Section);
    
public:
    UFUNCTION(BlueprintCallable)
    UDocumentElementWidget* AddSectionToPage(UDocumentElement* Section);
    
};

