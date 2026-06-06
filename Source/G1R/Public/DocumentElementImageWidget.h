#pragma once
#include "CoreMinimal.h"
#include "DocumentElementWidget.h"
#include "DocumentElementImageWidget.generated.h"

class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementImageWidget : public UDocumentElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CaptionText;
    
    UDocumentElementImageWidget();

};

