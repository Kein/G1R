#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Lockpicking.generated.h"

UCLASS()
class UAttributeSet_Lockpicking : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LockpickDurability)
    FGameplayAttributeData LockpickDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LockpickPrecision)
    FGameplayAttributeData LockpickPrecision;
    
    UAttributeSet_Lockpicking();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_LockpickPrecision(const FGameplayAttributeData& OldLockpickPrecision);
    
    UFUNCTION()
    void OnRep_LockpickDurability(const FGameplayAttributeData& OldLockpickDurability);
    
};

