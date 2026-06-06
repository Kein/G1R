#pragma once
#include "CoreMinimal.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbilityFloatingItem.generated.h"

class AGothicCharacter;
class UFloatingItemEffectComponent;
class UGothicMagicComponent;

UCLASS()
class G1R_API UGameplayAbilityFloatingItem : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    bool m_HasRequestedRecoveredItem;
    
    UPROPERTY()
    AGothicCharacter* m_GothicCharacter;
    
    UPROPERTY(Instanced)
    UGothicMagicComponent* m_GothicMagicComponent;
    
    UPROPERTY(Instanced)
    UFloatingItemEffectComponent* m_FloatingItemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RecoverItemTimeoutDelay;
    
private:
    UPROPERTY()
    bool m_IgnoreFirstThrowRuneNotify;
    
public:
    UGameplayAbilityFloatingItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void WaitUntilRecoverFloatingItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRestartVisualsOnThrowRuneWhileRunning_Scriptable();
    
    UFUNCTION()
    void OnSyncEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchSpellOnServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAbility_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateAbility_Scriptable();
    
};

