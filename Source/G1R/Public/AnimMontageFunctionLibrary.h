#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "AnimMontageFunctionLibrary.generated.h"

class UAnimMontage;
class UAnimNotify;

UCLASS(BlueprintType)
class G1R_API UAnimMontageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimMontageFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static float GetRootMotionDistanceToNotify(const UAnimMontage* AnimMontage, TSubclassOf<UAnimNotify> UpToNotifyClass);
    
};

