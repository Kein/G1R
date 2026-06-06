#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityMemory.generated.h"

class AGothicCharacter;
class AGothicCharacterState;
class UCharacterPerceptionComponent;
class ULongTermMemoryComponent;

UCLASS()
class G1R_API UGameplayAbilityMemory : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
    UGameplayAbilityMemory();

protected:
    UFUNCTION(BlueprintPure)
    ULongTermMemoryComponent* GetLongTermMemory() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetAvatarCharacterState() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetAvatarCharacter() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupPerceptions(UCharacterPerceptionComponent* Perception);
    
};

