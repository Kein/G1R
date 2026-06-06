#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Sleep.generated.h"

UCLASS()
class G1R_API UAttributeSet_Sleep : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SleepTime)
    FGameplayAttributeData SleepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxSleepTime)
    FGameplayAttributeData MaxSleepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SleepTimeRecoveryAmount)
    FGameplayAttributeData SleepTimeRecoveryAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SleepTimeRecoveryPeriod)
    FGameplayAttributeData SleepTimeRecoveryPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxRestTime)
    FGameplayAttributeData MaxRestTime;
    
    UAttributeSet_Sleep();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_SleepTimeRecoveryPeriod(const FGameplayAttributeData& OldSleepTimeRecoveryPeriod);
    
    UFUNCTION()
    void OnRep_SleepTimeRecoveryAmount(const FGameplayAttributeData& OldSleepTimeRecoveryAmount);
    
    UFUNCTION()
    void OnRep_SleepTime(const FGameplayAttributeData& OldSleepTime);
    
    UFUNCTION()
    void OnRep_MaxSleepTime(const FGameplayAttributeData& OldMaxSleepTime);
    
    UFUNCTION()
    void OnRep_MaxRestTime(const FGameplayAttributeData& OldMaxRestTime);
    
};

