#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Oxygen.generated.h"

UCLASS()
class G1R_API UAttributeSet_Oxygen : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Oxygen)
    FGameplayAttributeData Oxygen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxOxygen)
    FGameplayAttributeData MaxOxygen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OxygenDepletionRate)
    FGameplayAttributeData OxygenDepletionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OxygenRecoveryRate)
    FGameplayAttributeData OxygenRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CriticalLevelPercent)
    FGameplayAttributeData CriticalLevelPercent;
    
    UAttributeSet_Oxygen();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_OxygenRecoveryRate(const FGameplayAttributeData& OldOxygenRecoveryRate);
    
    UFUNCTION()
    void OnRep_OxygenDepletionRate(const FGameplayAttributeData& OldOxygenDepletionRate);
    
    UFUNCTION()
    void OnRep_Oxygen(const FGameplayAttributeData& OldOxygen);
    
    UFUNCTION()
    void OnRep_MaxOxygen(const FGameplayAttributeData& OldMaxOxygen);
    
    UFUNCTION()
    void OnRep_CriticalLevelPercent(const FGameplayAttributeData& OldCriticalLevelPercent);
    
};

