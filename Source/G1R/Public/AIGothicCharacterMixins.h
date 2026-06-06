#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIGothicCharacterMixins.generated.h"

class AGothicCharacter;
class UGameplayAbility_AI;
class UGameplayAbility_CharacterAI;

UCLASS(BlueprintType)
class G1R_API UAIGothicCharacterMixins : public UObject {
    GENERATED_BODY()
public:
    UAIGothicCharacterMixins();

    UFUNCTION(BlueprintCallable)
    static UGameplayAbility_CharacterAI* GetCharacterAI(const AGothicCharacter* This);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility_AI* GetAI(const AGothicCharacter* This);
    
};

