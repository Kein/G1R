#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Health.generated.h"

UCLASS()
class G1R_API UAttributeSet_Health : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health)
    FGameplayAttributeData Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth)
    FGameplayAttributeData MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageMultiplier)
    FGameplayAttributeData DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoveryRatePerHourOfSleep)
    FGameplayAttributeData RecoveryRatePerHourOfSleep;
    
    UAttributeSet_Health();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_RecoveryRatePerHourOfSleep(const FGameplayAttributeData& OldRecoveryRatePerHourOfSleep);
    
    UFUNCTION()
    void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
    
    UFUNCTION()
    void OnRep_Health(const FGameplayAttributeData& OldHealth);
    
    UFUNCTION()
    void OnRep_DamageMultiplier(const FGameplayAttributeData& OldDamageMultiplier);
    
};

