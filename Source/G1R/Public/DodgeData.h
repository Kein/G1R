#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DodgeData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDodgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperArmorResistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> Montage;
    
private:
    UPROPERTY()
    UAnimMontage* m_Montage;
    
public:
    G1R_API FDodgeData();
};

