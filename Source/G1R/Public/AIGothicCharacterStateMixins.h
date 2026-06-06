#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIGothicCharacterStateMixins.generated.h"

class AGothicCharacterState;
class UGameplayAbility_AI;
class UGameplayAbility_CharacterAI;

UCLASS(BlueprintType)
class G1R_API UAIGothicCharacterStateMixins : public UObject {
    GENERATED_BODY()
public:
    UAIGothicCharacterStateMixins();

    UFUNCTION(BlueprintCallable)
    static UGameplayAbility_CharacterAI* GetCharacterAI(const AGothicCharacterState* This);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility_AI* GetAI(const AGothicCharacterState* This);
    
};

