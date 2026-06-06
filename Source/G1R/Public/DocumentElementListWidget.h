#pragma once
#include "CoreMinimal.h"
#include "DocumentElementWidget.h"
#include "EDocumentSectionListWidgetStyle.h"
#include "DocumentElementListWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementListWidget : public UDocumentElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDocumentSectionListWidgetStyle ListStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> ListEntries;
    
    UDocumentElementListWidget();

};

