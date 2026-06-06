#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "MaterialPropertyModifier.h"
#include "VectorMaterialPropertyModifier.generated.h"

class UGothicMaterialsComponent;

UCLASS(BlueprintType)
class G1R_API UVectorMaterialPropertyModifier : public UObject, public IMaterialPropertyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicMaterialsComponent* GothicMaterialsComponent;
    
    UVectorMaterialPropertyModifier();

    UFUNCTION()
    void UpdateProperty(FLinearColor Value);
    
    UFUNCTION()
    void Reapply();
    

    // Fix for true pure virtual functions not being implemented
};

