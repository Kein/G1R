#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterFeaturesMaterialHandler.h"
#include "CharacterFeaturesDynamicMaterialHandler.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class G1R_API UCharacterFeaturesDynamicMaterialHandler : public UObject, public ICharacterFeaturesMaterialHandler {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInstanceDynamic* Mid;
    
    UCharacterFeaturesDynamicMaterialHandler();


    // Fix for true pure virtual functions not being implemented
};

