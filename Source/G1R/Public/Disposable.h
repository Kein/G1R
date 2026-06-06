#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Disposable.generated.h"

UINTERFACE(Blueprintable)
class UDisposable : public UInterface {
    GENERATED_BODY()
};

class IDisposable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dispose();
    
};

