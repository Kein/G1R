#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIAgentBlueprintUtils.generated.h"

class UObject;

UCLASS(BlueprintType)
class UAIAgentBlueprintUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIAgentBlueprintUtils();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerVisible(UObject* WorldContextObject, bool Visible);
    
};

