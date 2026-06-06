#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ScriptGameplayAbility.h"
#include "SpellContext.h"
#include "GameplayAbilitySpellCameraBase.generated.h"

class UDataModule_Locomotion;

UCLASS()
class G1R_API UGameplayAbilitySpellCameraBase : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY()
    FSpellContext m_SpellContext;
    
private:
    UPROPERTY()
    bool m_WasCharacterMoving;
    
public:
    UGameplayAbilitySpellCameraBase();

    UFUNCTION(Reliable, Server)
    void ServerDisableCameraBehaviour();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(Client, Reliable)
    void ClientDisableCameraBehaviour();
    
};

