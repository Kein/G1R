#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDifficultyGroup.h"
#include "Templates/SubclassOf.h"
#include "DifficultyPreset.generated.h"

class UDifficultySettings;

UCLASS(BlueprintType)
class G1R_API UDifficultyPreset : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EDifficultyGroup, TSubclassOf<UDifficultySettings>> m_presetDifficultySettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_presetName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_presetDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_uiSortingPriority;
    
public:
    UDifficultyPreset();

    UFUNCTION(BlueprintPure)
    float GetUISortingPriority() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPresetName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPresetDescription() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UDifficultySettings> GetGroupDifficultySettings(EDifficultyGroup Group) const;
    
};

