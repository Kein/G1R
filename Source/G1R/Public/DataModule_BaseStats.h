#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataModule.h"
#include "DataModule_BaseStats.generated.h"

class UCharacterDefinition;
class UCueVisualConfig;
class UGameplayEffect;

UCLASS(BlueprintType)
class G1R_API UDataModule_BaseStats : public UDataModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, ReplicatedUsing=OnRepConfig)
    UCharacterDefinition* m_CharacterDefinition;
    
public:
    UDataModule_BaseStats();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRepConfig();
    
    UFUNCTION(BlueprintPure)
    UGameplayEffect* GetPlayerAbilitySet() const;
    
    UFUNCTION(BlueprintPure)
    UCueVisualConfig* GetCueVisualConfig(const FGameplayTag& DebuffTag) const;
    
    UFUNCTION(BlueprintPure)
    UGameplayEffect* GetAbilitySet() const;
    
};

