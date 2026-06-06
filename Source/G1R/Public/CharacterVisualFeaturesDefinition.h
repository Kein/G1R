#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DirtVisualSettings.h"
#include "ScarsVisualSettings.h"
#include "TattooVisualSettings.h"
#include "CharacterVisualFeaturesDefinition.generated.h"

class UCharacterVisualFeaturesDefinition;
class USkinnedAsset;
class USkinnedMeshComponent;

UCLASS(BlueprintType)
class G1R_API UCharacterVisualFeaturesDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirtVisualSettings DirtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTattooVisualSettings TattooSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScarsVisualSettings ScarsSettings;
    
    UCharacterVisualFeaturesDefinition();

    UFUNCTION(BlueprintCallable)
    static void Editor_ApplyVisualsTo(USkinnedAsset* SkinnedAsset, UCharacterVisualFeaturesDefinition* CustomVisualDefiniton);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyVisualsTo(USkinnedMeshComponent* SkinnedMeshComponent) const;
    
};

