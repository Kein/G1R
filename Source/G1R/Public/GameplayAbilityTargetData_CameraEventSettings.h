#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_CameraEventSettings.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_CameraEventSettings : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForcePresetByName;
    
    FGameplayAbilityTargetData_CameraEventSettings();
};

