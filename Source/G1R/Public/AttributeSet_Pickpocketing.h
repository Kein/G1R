#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Pickpocketing.generated.h"

UCLASS()
class G1R_API UAttributeSet_Pickpocketing : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickPocketing)
    FGameplayAttributeData PickPocketing;
    
    UAttributeSet_Pickpocketing();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_PickPocketing(const FGameplayAttributeData& OldPickPocketing);
    
};

