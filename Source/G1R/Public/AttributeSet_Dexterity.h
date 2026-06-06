#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Dexterity.generated.h"

UCLASS()
class G1R_API UAttributeSet_Dexterity : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Dexterity)
    FGameplayAttributeData Dexterity;
    
    UAttributeSet_Dexterity();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_Dexterity(const FGameplayAttributeData& OldDexterity);
    
};

