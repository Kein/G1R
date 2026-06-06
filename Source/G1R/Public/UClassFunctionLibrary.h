#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UClassFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class G1R_API UUClassFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUClassFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UClass* FindClassFromName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UClass*> FindAllClassesInheritingFrom(UClass* BaseClass);
    
};

