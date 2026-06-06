#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Strength.generated.h"

UCLASS()
class G1R_API UAttributeSet_Strength : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Strength)
    FGameplayAttributeData Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Critical_Fists)
    FGameplayAttributeData Critical_Fists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Critical_OneHand)
    FGameplayAttributeData Critical_OneHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Critical_TwoHand)
    FGameplayAttributeData Critical_TwoHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Critical_Orc)
    FGameplayAttributeData Critical_Orc;
    
    UAttributeSet_Strength();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_Strength(const FGameplayAttributeData& OldStrength);
    
    UFUNCTION()
    void OnRep_Critical_TwoHand(const FGameplayAttributeData& OldCritical_TwoHand);
    
    UFUNCTION()
    void OnRep_Critical_Orc(const FGameplayAttributeData& OldCritical_Orc);
    
    UFUNCTION()
    void OnRep_Critical_OneHand(const FGameplayAttributeData& OldCritical_OneHand);
    
    UFUNCTION()
    void OnRep_Critical_Fists(const FGameplayAttributeData& OldCritical_Fists);
    
};

