#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AlkUserWidget.h"
#include "GenericItemViewWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UGenericItemViewWidget : public UAlkUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UGenericItemViewWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListItemCreated();
    

    // Fix for true pure virtual functions not being implemented
};

