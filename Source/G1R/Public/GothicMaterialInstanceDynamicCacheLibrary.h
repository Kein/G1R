#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MaterialInstanceDynamicParameterPack.h"
#include "GothicMaterialInstanceDynamicCacheLibrary.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTexture;

UCLASS(BlueprintType)
class UGothicMaterialInstanceDynamicCacheLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicMaterialInstanceDynamicCacheLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetVectorParameterValues(UPARAM(Ref) FMaterialInstanceDynamicParameterPack& ParameterPack, FName Name, const FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureParameterValues(UPARAM(Ref) FMaterialInstanceDynamicParameterPack& ParameterPack, FName Name, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalarParameterValue(UPARAM(Ref) FMaterialInstanceDynamicParameterPack& ParameterPack, FName Name, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMaterialInstanceDynamic* FindOrCreateCachedMaterialInstanceDynamic(const UObject* WorldContextObject, UMaterialInterface* SourceMaterial, const FMaterialInstanceDynamicParameterPack& ParameterPack);
    
};

