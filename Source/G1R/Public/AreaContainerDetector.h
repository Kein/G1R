#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "AreaContainerDetector.generated.h"

UINTERFACE(Blueprintable)
class UAreaContainerDetector : public UInterface {
    GENERATED_BODY()
};

class IAreaContainerDetector : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInside(FVector position) const;
    
};

