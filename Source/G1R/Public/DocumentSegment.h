#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "DocumentSegment.generated.h"

class AGothicCharacterState;
class UDocument;
class UDocumentElement;
class UDocumentElementBulletList;
class UDocumentElementChapterHeading;
class UDocumentElementEnumeratedList;
class UDocumentElementImage;
class UDocumentElementPageBreak;
class UDocumentElementParagraph;
class UDocumentElementQuote;
class UDocumentElementSectionHeading;
class UTexture2D;

UCLASS(Blueprintable)
class G1R_API UDocumentSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UDocumentElement*> Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDocument> InDocument;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AutoEvaluateUnlockFor;
    
    UDocumentSegment();

    UFUNCTION(BlueprintNativeEvent)
    void BuildSegment(const AGothicCharacterState* Reader);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool BP_PassesUnlockConditions(const AGothicCharacterState* Reader) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_NotifyShownToReaderFirstTime(const AGothicCharacterState* Reader);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_NotifyShownToReader(const AGothicCharacterState* Reader);
    
public:
    UFUNCTION(BlueprintCallable)
    UDocumentElementSectionHeading* AddSectionHeading(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementQuote* AddQuote(const FText& QuoteText, const FText& QuoteSource);
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementParagraph* AddParagraph(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementPageBreak* AddPageBreak();
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementImage* AddImage(const TSoftObjectPtr<UTexture2D>& Image, const FText& ImageCaptionText);
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementEnumeratedList* AddEnumeratedListEntry(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementChapterHeading* AddChapterHeading(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    UDocumentElementBulletList* AddBulletListEntry(const FText& Text);
    
};

