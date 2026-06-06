#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Armor.generated.h"

UCLASS()
class G1R_API UAttributeSet_Armor : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SuperArmor)
    FGameplayAttributeData SuperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxSuperArmor)
    FGameplayAttributeData MaxSuperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Blunt)
    FGameplayAttributeData Resistance_Blunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Edge)
    FGameplayAttributeData Resistance_Edge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Point)
    FGameplayAttributeData Resistance_Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Fire)
    FGameplayAttributeData Resistance_Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Energy)
    FGameplayAttributeData Resistance_Energy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Ice)
    FGameplayAttributeData Resistance_Ice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Wind)
    FGameplayAttributeData Resistance_Wind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Resistance_Falling)
    FGameplayAttributeData Resistance_Falling;
    
    UAttributeSet_Armor();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_SuperArmor(const FGameplayAttributeData& OldSuperArmor);
    
    UFUNCTION()
    void OnRep_Resistance_Wind(const FGameplayAttributeData& OldResistance_Wind);
    
    UFUNCTION()
    void OnRep_Resistance_Point(const FGameplayAttributeData& OldResistance_Point);
    
    UFUNCTION()
    void OnRep_Resistance_Ice(const FGameplayAttributeData& OldResistance_Ice);
    
    UFUNCTION()
    void OnRep_Resistance_Fire(const FGameplayAttributeData& OldResistance_Fire);
    
    UFUNCTION()
    void OnRep_Resistance_Falling(const FGameplayAttributeData& OldResistance_Falling);
    
    UFUNCTION()
    void OnRep_Resistance_Energy(const FGameplayAttributeData& OldResistance_Energy);
    
    UFUNCTION()
    void OnRep_Resistance_Edge(const FGameplayAttributeData& OldResistance_Edge);
    
    UFUNCTION()
    void OnRep_Resistance_Blunt(const FGameplayAttributeData& OldResistance_Blunt);
    
    UFUNCTION()
    void OnRep_MaxSuperArmor(const FGameplayAttributeData& OldMaxSuperArmor);
    
};

