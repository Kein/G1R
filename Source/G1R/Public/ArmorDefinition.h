#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ArmorDefinition.generated.h"

class AActor;
class UAbilitySystemComponent;
class UArmorUpgradeDefinition;
class UArmorVisualsDefinition;
class UScriptGameplayEffect;

UCLASS(Abstract, EditInlineNew)
class G1R_API UArmorDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorVisualsDefinition> m_ArmorVisualDefinition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_UpperBody_Light01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_UpperBody_Light02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_UpperBody_Mid01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_UpperBody_Mid02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_UpperBody_Heavy01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_UpperBody_Heavy02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_MidBody_Light01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_MidBody_Light02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_MidBody_Mid01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_MidBody_Mid02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_MidBody_Heavy01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_MidBody_Heavy02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_LowerBody_Light01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_LowerBody_Light02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_LowerBody_Mid01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_LowerBody_Mid02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_LowerBody_Heavy01_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UArmorUpgradeDefinition> m_LowerBody_Heavy02_ArmorUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtBlunt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtIce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProtEnergy;
    
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
    UArmorDefinition();

    UFUNCTION(BlueprintPure)
    int32 GetWindProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPointProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIceProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFireProtection() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UScriptGameplayEffect>> GetEquipGEPlusUpgrades(const UAbilitySystemComponent* abComp, AActor* Player);
    
    UFUNCTION(BlueprintPure)
    int32 GetEnergyProtection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEdgeProtection() const;
    
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
    
    UFUNCTION(BlueprintPure)
    int32 GetBluntProtection() const;
    
};

