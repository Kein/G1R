#pragma once
#include "CoreMinimal.h"
#include "CharacterSignificanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSignificanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxSignificanceRadius;
    
    UPROPERTY(EditAnywhere)
    float InViewRadius;
    
    UPROPERTY(EditAnywhere)
    float SpawnSignificance;
    
    UPROPERTY(EditAnywhere)
    float KeepSpawnedSignificance;
    
    UPROPERTY(EditAnywhere)
    float PreloadVisualsSignificance;
    
    G1R_API FCharacterSignificanceSettings();
};

