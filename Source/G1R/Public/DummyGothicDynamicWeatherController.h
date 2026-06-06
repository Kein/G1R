#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicDynamicWeatherController.h"
#include "DummyGothicDynamicWeatherController.generated.h"

UCLASS()
class G1R_API UDummyGothicDynamicWeatherController : public UObject, public IGothicDynamicWeatherController {
    GENERATED_BODY()
public:
    UDummyGothicDynamicWeatherController();


    // Fix for true pure virtual functions not being implemented
};

