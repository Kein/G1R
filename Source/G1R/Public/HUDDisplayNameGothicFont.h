#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDDisplayNameGothicFont.generated.h"

UINTERFACE(Blueprintable)
class UHUDDisplayNameGothicFont : public UInterface {
    GENERATED_BODY()
};

class IHUDDisplayNameGothicFont : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void DisplayName(const FText& Name);
    
};

