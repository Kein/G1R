#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialPropertyProvider.h"
#include "ScalarMaterialPropertyProvider.generated.h"

UCLASS()
class G1R_API UScalarMaterialPropertyProvider : public UObject, public IMaterialPropertyProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    float PropertyValue;
    
public:
    UScalarMaterialPropertyProvider();

    UFUNCTION()
    void SetPropertyValue(float Value);
    
    UFUNCTION()
    void Reapply() const;
    
    UFUNCTION()
    float GetPropertyValue() const;
    
    UFUNCTION()
    FName GetPropertyName() const;
    

    // Fix for true pure virtual functions not being implemented
};

