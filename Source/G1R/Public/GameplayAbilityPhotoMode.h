#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityPhotoMode.generated.h"

class AGothicCharacter;
class AGothicPlayerControllerBase;
class AGothicSpectatorPawn;

UCLASS()
class G1R_API UGameplayAbilityPhotoMode : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AGothicCharacter* m_PreviousOwner;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_Controller;
    
    UPROPERTY()
    AGothicSpectatorPawn* m_PhotoPawn;
    
public:
    UGameplayAbilityPhotoMode();

};

