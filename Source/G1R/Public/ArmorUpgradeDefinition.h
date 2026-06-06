#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ArmorUpgradeDefinition.generated.h"

class UArmorVisualsDefinition;
class UGameStory;

UCLASS(Abstract, EditInlineNew)
class G1R_API UArmorUpgradeDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorVisualsDefinition> m_ArmorUpgradeVisualDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_ConditionalTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffDexterity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffMana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffToughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtBlunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtIce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_BuffProtEnergy;
    
public:
    UArmorUpgradeDefinition();

    UFUNCTION(BlueprintPure)
    int32 GetBuffWindProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffWeight() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffToughness() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffStrength() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffPointProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffMana() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffIceProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffHealth() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffFireProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffEnergyProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffEdgeProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffDexterity() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBuffBluntProtection() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeUpgraded(UGameStory* story) const;
    
};

