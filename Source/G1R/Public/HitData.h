#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "TagMontage.h"
#include "TagMontageArray.h"
#include "HitData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType, EditInlineNew)
class UHitData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontage> m_Hits;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<TSoftObjectPtr<UAnimMontage>> m_Deaths;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_SwimDeath;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_DrownDeath;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> m_RidingDeaths;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontage> m_DeathsFromDefeatedMontages;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontage> m_DefeatedMontagesHits;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontageArray> m_DefeatedMontagesLoops;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontage> m_DefeatedStandUpMontages;
    
public:
    UHitData();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetSwimDeathAnimMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetRidingDeathAnimMontage(FGameplayTag Direction) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetHitAnimMontage(const FGameplayTagContainer& MatchAllExact) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDrownAnimMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDefeatedStandUpMontage(FGameplayTagContainer& MetaData) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDefeatedRandomLoopMontage(FGameplayTagContainer& MetaData) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDefeatedAnimMontage(const FGameplayTagContainer& MatchAllExact) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDeathFromDefeatedAnimMontage(FGameplayTagContainer& MetaData) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDeathAnimMontage() const;
    
    UFUNCTION(BlueprintCallable)
    void EmptyDeathArray();
    
    UFUNCTION(BlueprintCallable)
    void AddRidingDeath(FGameplayTag Direction, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddHit(FGameplayTagContainer& MetaData, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddDefeatedStandUpMontage(FGameplayTagContainer& MetaData, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddDefeatedLoopMontage(FGameplayTagContainer& MetaData, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddDefeatedHitMontage(FGameplayTagContainer& MetaData, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddDeathFromExecutionMontage(FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddDeathFromDefeatedMontage(FGameplayTagContainer& MetaData, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddDeath(FName Montage);
    
};

