#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDSimpleTextMessage.generated.h"

UINTERFACE(Blueprintable)
class UHUDSimpleTextMessage : public UInterface {
    GENERATED_BODY()
};

class IHUDSimpleTextMessage : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSimpleTextMessage(const FText& Message);
    
};

