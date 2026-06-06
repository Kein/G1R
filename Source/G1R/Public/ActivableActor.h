#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActivableActor.generated.h"

UINTERFACE(Blueprintable)
class UActivableActor : public UInterface {
    GENERATED_BODY()
};

class IActivableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool IsActive);
    
};

