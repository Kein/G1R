#pragma once
#include "CoreMinimal.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbility_PlayerPerception.generated.h"

class AController;
class APawn;
class UCharacterPerceptionComponent;

UCLASS()
class G1R_API UGameplayAbility_PlayerPerception : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
    UGameplayAbility_PlayerPerception();

private:
    UFUNCTION()
    void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupPerceptions(UCharacterPerceptionComponent* Perception);
    
};

