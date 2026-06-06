#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Movement.generated.h"

UCLASS()
class G1R_API UAttributeSet_Movement : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpeedModifier)
    FGameplayAttributeData SpeedModifier;
    
    UAttributeSet_Movement();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_SpeedModifier(const FGameplayAttributeData& OldSpeedModifier);
    
};

