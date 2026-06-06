#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpellTargetable.h"
#include "PickpocketPerceptionSightSettings.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpell_Telekinesis.generated.h"

class ATelekinesisItemMovement;
class UGameplayAbility;
class UInteractSensor;
class UInteractiveComponent;
class UTelekinesisVisualsComponent;

UCLASS()
class G1R_API UGameplayAbilitySpell_Telekinesis : public UGameplayAbilitySpellTargetable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_MovingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UInteractSensor* m_InteractSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayAbility> m_TelekinesisInteractAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxOscillationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinOscillationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool m_IsDoingInteractAction;
    
    UPROPERTY(EditAnywhere)
    FPickpocketPerceptionSightSettings m_PickpocketingSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    ATelekinesisItemMovement* m_TelekinesisItemMovementVisual;
    
private:
    UPROPERTY(EditAnywhere, Instanced)
    UInteractiveComponent* m_InteractiveComponent;
    
    UPROPERTY(Instanced)
    UTelekinesisVisualsComponent* m_TelekinesisVisualsComponent;
    
public:
    UGameplayAbilitySpell_Telekinesis();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopItemVisuals_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartItemVisuals_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDetachFromOwner_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void PickUpItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisualInterruption_Scriptable();
    
    UFUNCTION()
    void OnItemPicked(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSpell_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUsingImpulseOnDrop_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTargetVisibleServer_Scriptable();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UClass* GetItemMovmentVisualClass_Scriptable() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UInteractSensor* GetInteractSensor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetFallVelocity_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDropRotation_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDropImpulse_Scriptable();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UClass* GetComponentClass_Scriptable() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoAutomaticInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoActivateAbility_Scriptable();
    
    UFUNCTION()
    void DoActivateAbility();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayPickUpEndMontage();
    
    UFUNCTION(BlueprintCallable)
    void ClearInteractableBehaviours();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AvoidRestoreTargetGravity_Scriptable();
    
};

