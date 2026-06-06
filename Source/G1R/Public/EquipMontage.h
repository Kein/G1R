#pragma once
#include "CoreMinimal.h"
#include "EHoldsterLocation.h"
#include "EStance.h"
#include "EquipMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FEquipMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStance m_Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHoldsterLocation m_HoldsterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_Montage;
    
    G1R_API FEquipMontage();
};

