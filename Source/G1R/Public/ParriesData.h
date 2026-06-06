#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "TagMontage.h"
#include "ParriesData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType, EditInlineNew)
class UParriesData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTagMontage> m_Parries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperArmorResistanceMultiplier;
    
public:
    UParriesData();

    UFUNCTION(BlueprintPure)
    float GetSuperArmorResistanceMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetParry(const FGameplayTagContainer& MetaData) const;
    
    UFUNCTION(BlueprintCallable)
    void AddParry(FGameplayTagContainer MetaData, FName Montage);
    
};

