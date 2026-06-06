#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MSFootLockerMath.generated.h"

UCLASS(BlueprintType)
class MOTIONSYMPHONY_API UMSFootLockerMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMSFootLockerMath();

    UFUNCTION(BlueprintCallable)
    static float AngleBetween(const FVector& A, const FVector& B);
    
};

