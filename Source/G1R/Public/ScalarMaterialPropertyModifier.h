#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialPropertyModifier.h"
#include "ScalarMaterialPropertyModifier.generated.h"

class UGothicMaterialsComponent;

UCLASS(BlueprintType)
class G1R_API UScalarMaterialPropertyModifier : public UObject, public IMaterialPropertyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicMaterialsComponent* GothicMaterialsComponent;
    
    UScalarMaterialPropertyModifier();

    UFUNCTION()
    void UpdateProperty(float Value);
    
    UFUNCTION()
    void Reapply();
    

    // Fix for true pure virtual functions not being implemented
};

