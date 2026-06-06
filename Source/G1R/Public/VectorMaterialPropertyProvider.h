#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "MaterialPropertyProvider.h"
#include "VectorMaterialPropertyProvider.generated.h"

UCLASS()
class G1R_API UVectorMaterialPropertyProvider : public UObject, public IMaterialPropertyProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FLinearColor PropertyValue;
    
public:
    UVectorMaterialPropertyProvider();

    UFUNCTION()
    void SetPropertyValue(FLinearColor Value);
    
    UFUNCTION()
    void Reapply() const;
    
    UFUNCTION()
    FLinearColor GetPropertyValue() const;
    
    UFUNCTION()
    FName GetPropertyName() const;
    

    // Fix for true pure virtual functions not being implemented
};

