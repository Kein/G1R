#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeatherDebugger.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class G1R_API UWeatherDebugger : public UInterface {
    GENERATED_BODY()
};

class G1R_API IWeatherDebugger : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetWeatherOverridesReferences();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetWeatherActorReference();
    
};

