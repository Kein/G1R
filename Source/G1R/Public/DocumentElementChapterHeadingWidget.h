#pragma once
#include "CoreMinimal.h"
#include "DocumentElementWidget.h"
#include "DocumentElementChapterHeadingWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementChapterHeadingWidget : public UDocumentElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UDocumentElementChapterHeadingWidget();

};

