#pragma once
#include "CoreMinimal.h"
#include "EquipMontage.h"
#include "PickAndEquipMontage.generated.h"

USTRUCT(BlueprintType)
struct FPickAndEquipMontage : public FEquipMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Height;
    
    G1R_API FPickAndEquipMontage();
};

