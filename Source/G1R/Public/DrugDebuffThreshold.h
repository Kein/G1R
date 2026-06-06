#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "DrugDebuffThreshold.generated.h"

class UGameplayEffect;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UDrugDebuffThreshold : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_DrugDebuffGEClass;
    
    UDrugDebuffThreshold();

};

