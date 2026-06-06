#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "DocumentElementWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FString> ExtraStyleParameters;
    
    UDocumentElementWidget();

};

