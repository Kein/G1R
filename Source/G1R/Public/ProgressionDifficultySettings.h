#pragma once
#include "CoreMinimal.h"
#include "DifficultySettings.h"
#include "ProgressionDifficultySettings.generated.h"

UCLASS()
class G1R_API UProgressionDifficultySettings : public UDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_ExperienceMultiplier;
    
    UProgressionDifficultySettings();

    UFUNCTION(BlueprintPure)
    float GetLevelUpXPMultiplier() const;
    
};

