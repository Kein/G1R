#pragma once
#include "CoreMinimal.h"
#include "CharacterConfig.h"
#include "Templates/SubclassOf.h"
#include "SpawnCharacterCanTransformIntoDefinition.generated.h"

class ACharacterCanTransformInto;
class UAnimMontage;

UCLASS(Abstract, EditInlineNew)
class G1R_API USpawnCharacterCanTransformIntoDefinition : public UCharacterConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCharacterConfig> m_Config;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ACharacterCanTransformInto> m_Character;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_UnTransformMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WaitingTimeCrouchUntilTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CameraTravellingInitialDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CameraTravellingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_WaitingTimeCrouchUntilUnTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ShouldStartFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_CanSwim;
    
private:
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_UnTransformMontageInternal;
    
public:
    USpawnCharacterCanTransformIntoDefinition();

    UFUNCTION(BlueprintPure)
    TSubclassOf<ACharacterCanTransformInto> GetCharacterClass() const;
    
};

