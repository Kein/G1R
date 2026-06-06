#include "ArmorDefinition.h"
#include "Templates/SubclassOf.h"

UArmorDefinition::UArmorDefinition() {
    this->m_ArmorVisualDefinition = NULL;
    this->m_UpperBody_Light01_ArmorUpgrade = NULL;
    this->m_UpperBody_Light02_ArmorUpgrade = NULL;
    this->m_UpperBody_Mid01_ArmorUpgrade = NULL;
    this->m_UpperBody_Mid02_ArmorUpgrade = NULL;
    this->m_UpperBody_Heavy01_ArmorUpgrade = NULL;
    this->m_UpperBody_Heavy02_ArmorUpgrade = NULL;
    this->m_MidBody_Light01_ArmorUpgrade = NULL;
    this->m_MidBody_Light02_ArmorUpgrade = NULL;
    this->m_MidBody_Mid01_ArmorUpgrade = NULL;
    this->m_MidBody_Mid02_ArmorUpgrade = NULL;
    this->m_MidBody_Heavy01_ArmorUpgrade = NULL;
    this->m_MidBody_Heavy02_ArmorUpgrade = NULL;
    this->m_LowerBody_Light01_ArmorUpgrade = NULL;
    this->m_LowerBody_Light02_ArmorUpgrade = NULL;
    this->m_LowerBody_Mid01_ArmorUpgrade = NULL;
    this->m_LowerBody_Mid02_ArmorUpgrade = NULL;
    this->m_LowerBody_Heavy01_ArmorUpgrade = NULL;
    this->m_LowerBody_Heavy02_ArmorUpgrade = NULL;
    this->m_ProtEdge = 0;
    this->m_ProtBlunt = 0;
    this->m_ProtPoint = 0;
    this->m_ProtFire = 0;
    this->m_ProtWind = 0;
    this->m_ProtIce = 0;
    this->m_ProtEnergy = 0;
    this->m_BuffStrength = 0;
    this->m_BuffDexterity = 0;
    this->m_BuffHealth = 0;
    this->m_BuffMana = 0;
    this->m_BuffToughness = 0;
    this->m_BuffWeight = 0;
    this->m_BuffProtEdge = 0;
    this->m_BuffProtBlunt = 0;
    this->m_BuffProtPoint = 0;
    this->m_BuffProtFire = 0;
    this->m_BuffProtWind = 0;
    this->m_BuffProtIce = 0;
    this->m_BuffProtEnergy = 0;
}

int32 UArmorDefinition::GetWindProtection() const {
    return 0;
}

int32 UArmorDefinition::GetPointProtection() const {
    return 0;
}

int32 UArmorDefinition::GetIceProtection() const {
    return 0;
}

int32 UArmorDefinition::GetFireProtection() const {
    return 0;
}

TArray<TSubclassOf<UScriptGameplayEffect>> UArmorDefinition::GetEquipGEPlusUpgrades(const UAbilitySystemComponent* abComp, AActor* Player) {
    return TArray<TSubclassOf<UScriptGameplayEffect>>();
}

int32 UArmorDefinition::GetEnergyProtection() const {
    return 0;
}

int32 UArmorDefinition::GetEdgeProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffWindProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffWeight() const {
    return 0;
}

int32 UArmorDefinition::GetBuffToughness() const {
    return 0;
}

int32 UArmorDefinition::GetBuffStrength() const {
    return 0;
}

int32 UArmorDefinition::GetBuffPointProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffMana() const {
    return 0;
}

int32 UArmorDefinition::GetBuffIceProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffHealth() const {
    return 0;
}

int32 UArmorDefinition::GetBuffFireProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffEnergyProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffEdgeProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBuffDexterity() const {
    return 0;
}

int32 UArmorDefinition::GetBuffBluntProtection() const {
    return 0;
}

int32 UArmorDefinition::GetBluntProtection() const {
    return 0;
}


