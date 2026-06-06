#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractiveObjectUsedInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractiveObjectUsedInterface : public UInterface {
    GENERATED_BODY()
};

class IInteractiveObjectUsedInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInteractPlayer(AActor* Player);
    
};

