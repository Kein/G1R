#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Fatigue.generated.h"

UCLASS()
class G1R_API UAttributeSet_Fatigue : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Fatigue)
    FGameplayAttributeData Fatigue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxFatigue)
    FGameplayAttributeData MaxFatigue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FillRatio)
    FGameplayAttributeData FillRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FillRatioPeriod)
    FGameplayAttributeData FillRatioPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxThresholdIndex)
    FGameplayAttributeData MaxThresholdIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RecoveryRatePerHourOfSleep)
    FGameplayAttributeData RecoveryRatePerHourOfSleep;
    
    UAttributeSet_Fatigue();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_RecoveryRatePerHourOfSleep(const FGameplayAttributeData& OldData);
    
    UFUNCTION()
    void OnRep_MaxThresholdIndex(const FGameplayAttributeData& OldData);
    
    UFUNCTION()
    void OnRep_MaxFatigue(const FGameplayAttributeData& OldData);
    
    UFUNCTION()
    void OnRep_FillRatioPeriod(const FGameplayAttributeData& OldData);
    
    UFUNCTION()
    void OnRep_FillRatio(const FGameplayAttributeData& OldData);
    
    UFUNCTION()
    void OnRep_Fatigue(const FGameplayAttributeData& OldData);
    
};

