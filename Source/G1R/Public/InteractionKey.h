#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractionKey.generated.h"

UCLASS(EditInlineNew)
class G1R_API UInteractionKey : public UUserWidget {
    GENERATED_BODY()
public:
    UInteractionKey();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RefreshInputDevice();
    
};

