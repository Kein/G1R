#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Materials/MaterialInstance.h"
#include "MaterialUtils.generated.h"

class UMaterialInstanceConstant;
class UMaterialInterface;

UCLASS(BlueprintType)
class G1R_API UMaterialUtils : public UObject {
    GENERATED_BODY()
public:
    UMaterialUtils();

private:
    UFUNCTION(BlueprintCallable)
    static void SetMaterialInstanceStaticSwitchParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTexturePropertyOverwritten(const UMaterialInstanceConstant* MaterialInstanceConstant, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStaticSwitchPropertyOverwritten(const UMaterialInstanceConstant* MaterialInstanceConstant, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMaterialInstanceCompilerErrors(UMaterialInterface* MaterialInterface);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaterialInstanceStaticSwitchParameterValue(UMaterialInstanceConstant* Instance, FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTextureParameterValue> GetAllTexturesReferences(UMaterialInstanceConstant* Instance);
    
};

