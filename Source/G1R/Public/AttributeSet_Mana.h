#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Mana.generated.h"

UCLASS()
class G1R_API UAttributeSet_Mana : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Mana)
    FGameplayAttributeData Mana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxMana)
    FGameplayAttributeData MaxMana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MagicianLevel)
    FGameplayAttributeData MagicianLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoveryRatePerHourOfSleep)
    FGameplayAttributeData RecoveryRatePerHourOfSleep;
    
    UAttributeSet_Mana();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_RecoveryRatePerHourOfSleep(const FGameplayAttributeData& OldRecoveryRatePerHourOfSleep);
    
    UFUNCTION()
    void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);
    
    UFUNCTION()
    void OnRep_Mana(const FGameplayAttributeData& OldMana);
    
    UFUNCTION()
    void OnRep_MagicianLevel(const FGameplayAttributeData& OldMagician);
    
};

