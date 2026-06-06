#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialPropertyModifier.h"
#include "TextureMaterialPropertyModifier.generated.h"

class UGothicMaterialsComponent;
class UTexture;

UCLASS(BlueprintType)
class G1R_API UTextureMaterialPropertyModifier : public UObject, public IMaterialPropertyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* PropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicMaterialsComponent* GothicMaterialsComponent;
    
    UTextureMaterialPropertyModifier();

    UFUNCTION()
    void UpdateProperty(UTexture* Value);
    

    // Fix for true pure virtual functions not being implemented
};

