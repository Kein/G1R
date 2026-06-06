#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Combat.h"
#include "GameplayAbilityArchery.generated.h"

class AArcheryWeaponVisual;
class UArcheryComponent;
class UGothicAbilitySystemComponent;

UCLASS()
class G1R_API UGameplayAbilityArchery : public UGameplayAbilityBase_Combat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, ReplicatedUsing=OnRep_ArcheryComponent)
    UArcheryComponent* m_ArcheryComponent;
    
private:
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY()
    TWeakObjectPtr<AArcheryWeaponVisual> m_BowOrCrossbow;
    
public:
    UGameplayAbilityArchery();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_ArcheryComponent();
    
    UFUNCTION()
    void OnQuickBowStringReleased();
    
    UFUNCTION()
    void OnDrawBowStringStarted();
    
    UFUNCTION()
    void OnBowStringReleased();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsUntrained_Scriptable() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetOwnedGameplayTags() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UClass* GetComponentClass_Scriptable() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoQuickBowStringReleased_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoBowStringReleased_Scriptable();
    
};

