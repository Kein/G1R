#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterAttackMixin.generated.h"

class AGothicCharacter;

UCLASS(BlueprintType)
class UCharacterAttackMixin : public UObject {
    GENERATED_BODY()
public:
    UCharacterAttackMixin();

    UFUNCTION(BlueprintCallable)
    static bool IsInAttackComboWindow(AGothicCharacter* This);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInAttackCombo(AGothicCharacter* This);
    
};

