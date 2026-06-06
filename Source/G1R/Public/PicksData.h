#pragma once
#include "CoreMinimal.h"
#include "EStance.h"
#include "GothicBaseConfig.h"
#include "StanceMapMontage.h"
#include "PicksData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType, EditInlineNew)
class UPicksData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FStanceMapMontage> m_MontagesMap;
    
public:
    UPicksData();

    UFUNCTION(BlueprintPure)
    TMap<FName, FStanceMapMontage> GetMontagesMap();
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetMontage(FName Name, EStance stance) const;
    
};

