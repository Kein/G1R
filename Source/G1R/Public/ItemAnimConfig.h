#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DeathSkillAnimMontage.h"
#include "EHoldsterLocation.h"
#include "EStance.h"
#include "EWeaponSkill.h"
#include "GothicBaseConfig.h"
#include "RandomSequence.h"
#include "Templates/SubclassOf.h"
#include "ItemAnimConfig.generated.h"

class UAnimInstance;
class UAnimMontage;
class UConsumablesData;
class UDodgesData;
class UEquipData;
class UHitData;
class ULocomotionSequencesData;
class UPicksData;
class USpeedConfig;
class UTurnsData;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UItemAnimConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> m_AnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UDodgesData> m_DodgesData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UEquipData> m_EquipData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UEquipData> m_NonCombatEquipData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UHitData> m_HitsData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> m_ConsumeData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UConsumablesData> m_ConsumablesData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UPicksData> m_PicksData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UPicksData> m_LootsData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UPicksData> m_StartFireData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UPicksData> m_EndFireData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_ThrowItem;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_ThrowItem_Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UTurnsData> m_TurnsData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRandomSequence> m_IdleBreakers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRandomSequence> m_WalkBreakers;
    
    UPROPERTY()
    TMap<FGameplayTag, FDeathSkillAnimMontage> m_DeathSkillsAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULocomotionSequencesData> m_LocomotionSequencesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpeedConfig> m_SpeedsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpeedConfig> m_SpeedsNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_OverrideLocomotionConfig;
    
public:
    UItemAnimConfig();

    UFUNCTION()
    TArray<FRandomSequence> GetWalkBreakers() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetUnequipMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const;
    
    UFUNCTION(BlueprintPure)
    UTurnsData* GetTurnsData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetThrowMontage(bool isCrouch) const;
    
    UFUNCTION(BlueprintPure)
    UPicksData* GetStartFireData() const;
    
    UFUNCTION(BlueprintPure)
    USpeedConfig* GetSpeedConfigPlayer() const;
    
    UFUNCTION(BlueprintPure)
    USpeedConfig* GetSpeedConfigNPC() const;
    
    UFUNCTION(BlueprintPure)
    FName GetSocketDraw(EHoldsterLocation HoldsterLocation) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSocket() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetPukeMontage(EStance stance) const;
    
    UFUNCTION(BlueprintPure)
    UPicksData* GetPickData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetPickAndEquipMontage(FName Height, EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const;
    
    UFUNCTION(BlueprintPure)
    UEquipData* GetNonCombatEquipData() const;
    
    UFUNCTION(BlueprintPure)
    UPicksData* GetLootData() const;
    
    UFUNCTION(BlueprintPure)
    ULocomotionSequencesData* GetLocomotionSequencesData() const;
    
    UFUNCTION()
    TArray<FRandomSequence> GetIdleBreakers() const;
    
    UFUNCTION(BlueprintPure)
    UHitData* GetHitData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const;
    
    UFUNCTION(BlueprintPure)
    UEquipData* GetEquipData() const;
    
    UFUNCTION(BlueprintPure)
    UPicksData* GetEndFireData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDropMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat, bool DropBackwards) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDropAndEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const;
    
    UFUNCTION(BlueprintPure)
    UDodgesData* GetDodgesData() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDeathAnimForItem(const FGameplayTag& ItemTag, EWeaponSkill ItemSkill) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetConsumeMontage(const FGameplayTag& Tag, EStance stance) const;
    
    UFUNCTION(BlueprintPure)
    UConsumablesData* GetConsumablesData() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UAnimInstance> GetAnimationBp() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWalkBreaker(FName Path, float Chance, int32 LoopsBeforeRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddIdleBreaker(FName Path, float Chance, int32 LoopsBeforeRemove);
    
    UFUNCTION(BlueprintCallable)
    void AddDeathAnimForItem(const FGameplayTag& ItemTag, EWeaponSkill ItemSkill, const TSoftObjectPtr<UAnimMontage>& animHitMontage);
    
};

