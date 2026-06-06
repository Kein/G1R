#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GothicFluxActivable.generated.h"

UINTERFACE(Blueprintable)
class UGothicFluxActivable : public UInterface {
    GENERATED_BODY()
};

class IGothicFluxActivable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_Disable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_Activate();
    
};

