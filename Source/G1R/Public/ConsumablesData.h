#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EStance.h"
#include "GothicBaseConfig.h"
#include "StanceMapMontage.h"
#include "ConsumablesData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType, EditInlineNew)
class UConsumablesData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FStanceMapMontage> m_Consumables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStanceMapMontage m_Puke;
    
public:
    UConsumablesData();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetPukeMontage(EStance stance) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetMontage(FGameplayTag Tag, EStance stance) const;
    
};

