#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "DocumentWidget.generated.h"

class UDocument;
class UDocumentPageWidget;
class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDocumentPageWidget> PageWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetSwitcher* Pages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumPageTurns;
    
    UDocumentWidget();

    UFUNCTION(BlueprintCallable)
    void TurnToPage(int32 Page);
    
    UFUNCTION(BlueprintCallable)
    void TurnPageForward();
    
    UFUNCTION(BlueprintCallable)
    void TurnPageBackward();
    
    UFUNCTION(BlueprintPure)
    TArray<UDocumentPageWidget*> GetPages() const;
    
    UFUNCTION(BlueprintPure)
    UDocumentPageWidget* GetOpenPage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPages() const;
    
    UFUNCTION(BlueprintPure)
    bool CanTurnPageForward() const;
    
    UFUNCTION(BlueprintPure)
    bool CanTurnPageBackward() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildFromDocumentClass(TSubclassOf<UDocument> DocumentClass);
    
    UFUNCTION(BlueprintCallable)
    void BuildFromDocument(UDocument* Document);
    
};

