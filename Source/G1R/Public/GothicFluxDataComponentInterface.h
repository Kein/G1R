#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GothicFluxDataComponentInterface.generated.h"

UINTERFACE(Blueprintable)
class UGothicFluxDataComponentInterface : public UInterface {
    GENERATED_BODY()
};

class IGothicFluxDataComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsGothicFluxDataValid() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetGothicFluxSurfaceLocation() const;
    
};

