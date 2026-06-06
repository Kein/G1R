#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerHelper.generated.h"

UCLASS(BlueprintType)
class G1R_API UPlayerHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerHelper();

    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerNicknameHashModuled();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerNickname(int32 Index);
    
};

