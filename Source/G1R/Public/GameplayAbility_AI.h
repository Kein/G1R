#pragma once
#include "CoreMinimal.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbility_AI.generated.h"

class AGothicAIController;
class AGothicCharacter;
class AGothicCharacterState;
class AGothicNPCState;

UCLASS()
class G1R_API UGameplayAbility_AI : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
    UGameplayAbility_AI();

    UFUNCTION(BlueprintPure)
    AGothicNPCState* GetNPCState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetCharacterState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AGothicAIController* GetAIController() const;
    
};

