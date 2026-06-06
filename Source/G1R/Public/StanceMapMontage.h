#pragma once
#include "CoreMinimal.h"
#include "EStance.h"
#include "StanceMapMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStanceMapMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EStance, TSoftObjectPtr<UAnimMontage>> m_StanceMap;
    
    G1R_API FStanceMapMontage();
};

