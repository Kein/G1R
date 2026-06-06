#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GothicDynamicDayLight.generated.h"

UINTERFACE(Blueprintable)
class UGothicDynamicDayLight : public UInterface {
    GENERATED_BODY()
};

class IGothicDynamicDayLight : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLight(float Intensity, FLinearColor Color);
    
};

