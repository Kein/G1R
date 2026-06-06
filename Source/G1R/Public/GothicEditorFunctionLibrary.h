#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GothicEditorFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicEditorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicEditorFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ResumePIE();
    
    UFUNCTION(BlueprintCallable)
    static void PausePIE();
    
};

