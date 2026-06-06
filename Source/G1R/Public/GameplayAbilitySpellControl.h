#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpellTargetable.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpellControl.generated.h"

class AGothicCharacter;
class UAbilityTask_WaitGameplayEvent;
class UGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilitySpellControl : public UGameplayAbilitySpellTargetable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_TargetControlledEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_CasterControllingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_CameraTravelInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_CameraTravelDuration;
    
private:
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_WaitingForEndControlEventTask;
    
    UPROPERTY(Replicated)
    bool m_Success;
    
public:
    UGameplayAbilitySpellControl();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartControllingFinished_Scriptable(const AGothicCharacter* GothicCharacter);
    
    UFUNCTION()
    void OnControlFinished(FGameplayEventData Payload);
    
};

