#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "MaterialPropertyProvider.h"
#include "MultipleMaterialPropertyProvider.generated.h"

class UScalarMaterialPropertyProvider;
class UTexture;
class UTextureMaterialPropertyProvider;
class UVectorMaterialPropertyProvider;

UCLASS(BlueprintType)
class G1R_API UMultipleMaterialPropertyProvider : public UObject, public IMaterialPropertyProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UScalarMaterialPropertyProvider*> ScalarPropertyProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UVectorMaterialPropertyProvider*> VectorPropertyProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UTextureMaterialPropertyProvider*> TexturePropertyProviders;
    
    UMultipleMaterialPropertyProvider();

    UFUNCTION(BlueprintCallable)
    TArray<TScriptInterface<IMaterialPropertyProvider>> CreateProviderArray();
    
    UFUNCTION(BlueprintCallable)
    void AddVector(FName Name, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void AddTexture(FName Name, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void AddScalar(FName Name, float Value);
    

    // Fix for true pure virtual functions not being implemented
};

