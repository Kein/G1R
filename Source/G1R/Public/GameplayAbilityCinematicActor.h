#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityCinematicActor.generated.h"

class UAbilityTask_SayVoiceline;
class UHUDCinematicController;

UCLASS()
class G1R_API UGameplayAbilityCinematicActor : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_SayVoiceline* SayVoiceline;
    
    UPROPERTY()
    FText TalkingCharacterName;
    
    UPROPERTY()
    UHUDCinematicController* HUDCinematicController;
    
public:
    UGameplayAbilityCinematicActor();

    UFUNCTION()
    void FinishedPreloadingVoiceLine();
    
};

