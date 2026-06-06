#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DifficultySettings.generated.h"

UCLASS(BlueprintType)
class G1R_API UDifficultySettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_settingsName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_uiSortingPriority;
    
public:
    UDifficultySettings();

    UFUNCTION(BlueprintPure)
    float GetUISortingPriority() const;
    
    UFUNCTION(BlueprintPure)
    FText GetSettingsName() const;
    
};

