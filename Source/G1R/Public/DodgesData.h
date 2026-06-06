#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DodgeData.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "DodgesData.generated.h"

class UAnimMontage;
class URollConfig;

UCLASS(BlueprintType, EditInlineNew)
class UDodgesData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FDodgeData> m_Dodges;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_Roll;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<URollConfig> m_RollConfig;
    
public:
    UDodgesData();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetRoll() const;
    
    UFUNCTION(BlueprintPure)
    FDodgeData GetDodgeData(const FGameplayTag& Orientation, const FGameplayTag& Direction, const FGameplayTag& Pose) const;
    
};

