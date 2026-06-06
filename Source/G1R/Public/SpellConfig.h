#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CameraBehaviour.h"
#include "ESpellManaUsage.h"
#include "ESpellTargetType.h"
#include "GothicBaseConfig.h"
#include "SpellLevelRange.h"
#include "Templates/SubclassOf.h"
#include "SpellConfig.generated.h"

class AGothicCharacter;
class UScriptGameplayAbility;
class USpellConfigLevelData;
class USpellItemAnimConfig;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class G1R_API USpellConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USpellItemAnimConfig* m_SpellItemAnimConfig;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESpellTargetType m_SpellTargetType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESpellManaUsage m_SpellManaUsage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSpellLevelRange> m_SpellLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TimePercentageFromWhichCantCancelSpell;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AreaRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AreaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraBehaviour m_CameraBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SpawnLocationSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_SpellCategoryTag;
    
public:
    USpellConfig();

    UFUNCTION(BlueprintNativeEvent)
    bool IsTargetReachable_Scriptable(const AGothicCharacter* Instigator, const AGothicCharacter* Target) const;
    
    UFUNCTION(BlueprintPure)
    float GetTimePercentageFromWhichCantCancelSpell() const;
    
    UFUNCTION(BlueprintPure)
    ESpellTargetType GetSpellTargetType() const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetSpellLevels_Scriptable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpellLevels() const;
    
    UFUNCTION(BlueprintPure)
    FSpellLevelRange GetSpellLevel(const int32 spellLevel) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<USpellConfigLevelData> GetSpellConfigLevelData(const int32 spellLevel) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UScriptGameplayAbility> GetSpellClass(const int32 spellLevel) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetSpellCategoryTag() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpellAreaRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpellAreaAngle() const;
    
    UFUNCTION(BlueprintPure)
    FName GetSpawnLocationSocketName() const;
    
    UFUNCTION(BlueprintPure)
    ESpellManaUsage GetManaUsage() const;
    
    UFUNCTION(BlueprintPure)
    FCameraBehaviour GetCameraBehaviour() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeCameraBehaviour_Scriptable(bool Moving);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSpellLevel(float NewCastManaCost, float NewCastTime, float NewManaCostSc, TSubclassOf<UScriptGameplayAbility> SpellClass, TSubclassOf<USpellConfigLevelData> SpellConfigLevelData);
    
};

