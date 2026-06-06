#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "TagMontageArray.h"
#include "TauntData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UTauntData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FTagMontageArray> m_TauntMontages;
    
public:
    UTauntData();

    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetTauntMontageMatchingAny(FGameplayTagContainer& Out_MontageTags, const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetTauntMontageMatchingAllAndAny(FGameplayTagContainer& Out_MontageTags, const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetTauntMontageMatchingAll(FGameplayTagContainer& Out_MontageTags, const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& bLocked);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTauntAvailableMatchingAny(const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTauntAvailableMatchingAllAndAny(const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& MatchAtleastOne, const FGameplayTagContainer& bLocked);
    
    UFUNCTION(BlueprintCallable)
    bool CheckTauntAvailableMatchingAll(const FGameplayTagContainer& MatchAllExact, const FGameplayTagContainer& bLocked);
    
    UFUNCTION(BlueprintCallable)
    void AddTauntByTag(FGameplayTag GameplayTag, FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddTauntByReference(FGameplayTagContainer MetaData, TSoftObjectPtr<UAnimMontage> Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddTaunt(FGameplayTagContainer MetaData, FName Montage);
    
};

