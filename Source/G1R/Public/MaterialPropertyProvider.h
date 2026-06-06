#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MaterialPropertyProvider.generated.h"

class IMaterialPropertyModifier;
class UMaterialPropertyModifier;
class UGothicMaterialsComponent;

UINTERFACE(Blueprintable)
class UMaterialPropertyProvider : public UInterface {
    GENERATED_BODY()
};

class IMaterialPropertyProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMaterialPropertyModifier> CreateModify(UGothicMaterialsComponent* GothicMaterialsComponent, bool bIsDynamic);
    
};

