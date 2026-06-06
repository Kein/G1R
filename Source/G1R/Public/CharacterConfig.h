#pragma once
#include "CoreMinimal.h"
#include "CharacterSignificanceSettings.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "CharacterConfig.generated.h"

class UAIAgentConfig_Navigation;
class UAnimConfig;
class UCharacterDefinition;
class UCharacterEffectComponentsConfig;
class UEffectComponentConfiguration;
class UInteractiveObjectDefinition;
class ULocomotionConfig;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class G1R_API UCharacterConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCharacterDefinition> m_CharacterDefinition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ULocomotionConfig> m_LocomotionConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimConfig> m_AnimConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCharacterSignificanceSettings m_SpawnSettings;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAIAgentConfig_Navigation> m_NavigationConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UEffectComponentConfiguration>> m_EffectStateComponentConfigurations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCharacterEffectComponentsConfig> m_CharacterEffectComponentsConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_CharacterDefaultInteraction;
    
public:
    UCharacterConfig();

};

