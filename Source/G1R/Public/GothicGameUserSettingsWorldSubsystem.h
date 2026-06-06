#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GothicGameUserSettingsWorldSubsystem.generated.h"

UCLASS()
class G1R_API UGothicGameUserSettingsWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UGothicGameUserSettingsWorldSubsystem();

    UFUNCTION()
    void ApplyUserSettings();
    
    UFUNCTION()
    void ApplyCommonInputSettings();
    
};

