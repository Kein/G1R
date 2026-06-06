#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CombatAIModifiers.h"
#include "DifficultySettings.h"
#include "CombatDifficultySettings.generated.h"

UCLASS()
class G1R_API UCombatDifficultySettings : public UDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, FCombatAIModifiers> m_CombatAIModifiers;
    
    UCombatDifficultySettings();

    UFUNCTION(BlueprintCallable)
    void AddCombatModifier(const FString& Attribute, FGameplayTag CharacterType, float Modifier);
    
};

