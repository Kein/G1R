#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MaterialPropertyModifier.generated.h"

UINTERFACE(Blueprintable)
class UMaterialPropertyModifier : public UInterface {
    GENERATED_BODY()
};

class IMaterialPropertyModifier : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Apply();
    
};

