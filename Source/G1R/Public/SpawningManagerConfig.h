#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "SpawningManagerConfig.generated.h"

UCLASS(Const, EditInlineNew)
class USpawningManagerConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float m_NoSpawnAreaRadius;
    
    UPROPERTY()
    float m_NoSpawnVisibleAreaRadius;
    
    UPROPERTY()
    float m_NoSpawnVisibleAreaOffset;
    
    UPROPERTY()
    float m_SpawnAreaRadius;
    
    UPROPERTY()
    float m_UnpawnAreaRadius;
    
    UPROPERTY()
    FGameplayTagContainer m_ExcludedCharacterTypes;
    
    UPROPERTY()
    FGameplayTagContainer m_IncludedCharacterTypes;
    
    UPROPERTY()
    TArray<FName> m_CharacterUniqueNameRestrictions;
    
    UPROPERTY()
    uint64 m_AIBudget;
    
public:
    USpawningManagerConfig();

};

