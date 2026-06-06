#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "PerceptionSettings.h"
#include "PerceptionAgentSettings.generated.h"

UCLASS()
class G1R_API UPerceptionAgentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPerceptionSettings Normal;
    
    UPROPERTY(EditDefaultsOnly)
    FPerceptionSettings HighAlert;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer HighAlertWhen;
    
    UPROPERTY(EditDefaultsOnly)
    float CustomUpdateRate;
    
    UPROPERTY(EditDefaultsOnly)
    float KeepAreaChangeTagForSeconds;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePathFindingForPerception;
    
    UPerceptionAgentSettings();

};

