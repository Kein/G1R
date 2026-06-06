#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataConfigPreloadable.h"
#include "EComboTiming.h"
#include "Templates/SubclassOf.h"
#include "ComboAttackConfig.generated.h"

class UComboAttackConfig;
class UGameplayAbilityBase;

UCLASS(Abstract, BlueprintType, Const)
class G1R_API UComboAttackConfig : public UDataAsset, public IDataConfigPreloadable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGameplayAbilityBase> m_GA_Attack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* m_MetaData;
    
public:
    UComboAttackConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddOptionByTiming(const FGameplayTag AttackDirection, EComboTiming ComboTiming, const TSubclassOf<UComboAttackConfig> Combo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddOption(const FGameplayTag AttackDirection, const TSubclassOf<UComboAttackConfig> Combo) const;
    

    // Fix for true pure virtual functions not being implemented
};

