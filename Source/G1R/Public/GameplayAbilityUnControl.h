#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityUnControl.generated.h"

class AAIAgentCharacter;
class AGothicCharacter;

UCLASS()
class G1R_API UGameplayAbilityUnControl : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_CameraTravelInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_CameraTravelDuration;
    
    UGameplayAbilityUnControl();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnControl_Scriptable(const AAIAgentCharacter* controlledCharacter);
    
private:
    UFUNCTION()
    void OnSync();
    
    UFUNCTION()
    void OnHoldFinished();
    
    UFUNCTION()
    void OnHoldCanceled();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinishedUnControl_Scriptable(const AGothicCharacter* characterControlling, const AAIAgentCharacter* controlledCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelSpellServer_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateUnControl_Scriptable(const AAIAgentCharacter* controlledCharacter);
    
};

