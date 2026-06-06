#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GothicSystemFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicSystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicSystemFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsConsoleType_Lockhart();
    
};

