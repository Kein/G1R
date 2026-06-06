#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialPropertyProvider.h"
#include "TextureMaterialPropertyProvider.generated.h"

class UTexture;

UCLASS()
class G1R_API UTextureMaterialPropertyProvider : public UObject, public IMaterialPropertyProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    UTexture* PropertyValue;
    
public:
    UTextureMaterialPropertyProvider();

    UFUNCTION()
    void SetPropertyValue(UTexture* Value);
    
    UFUNCTION()
    UTexture* GetPropertyValue() const;
    
    UFUNCTION()
    FName GetPropertyName() const;
    

    // Fix for true pure virtual functions not being implemented
};

