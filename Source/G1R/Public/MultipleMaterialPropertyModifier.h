#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialPropertyModifier.h"
#include "MultipleMaterialPropertyModifier.generated.h"

UCLASS(BlueprintType)
class G1R_API UMultipleMaterialPropertyModifier : public UObject, public IMaterialPropertyModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TScriptInterface<IMaterialPropertyModifier>> Modifiers;
    
    UMultipleMaterialPropertyModifier();


    // Fix for true pure virtual functions not being implemented
};

