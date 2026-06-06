#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_SmoothPositionToSaddle.generated.h"

class AGothicCharacter;
class UAbilityTask_SmoothPositionToSaddle;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_SmoothPositionToSaddle : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_riderCharacter;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_mountCharacter;
    
public:
    UAbilityTask_SmoothPositionToSaddle();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SmoothPositionToSaddle* SmoothPositionToSaddle(UGameplayAbility* OwningAbility, FName TaskInstanceName, AGothicCharacter* riderCharacter, AGothicCharacter* mountCharacter, FName SocketName, float taskDuration);
    
};

