#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterFeaturesMaterialHandler.h"
#include "CharacterFeaturesConstantMaterialHandler.generated.h"

class UMaterialInstanceConstant;

UCLASS()
class G1R_API UCharacterFeaturesConstantMaterialHandler : public UObject, public ICharacterFeaturesMaterialHandler {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInstanceConstant* MIC;
    
    UCharacterFeaturesConstantMaterialHandler();


    // Fix for true pure virtual functions not being implemented
};

