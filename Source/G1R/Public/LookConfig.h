#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GothicBaseConfig.h"
#include "LookConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class ULookConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LookUpDownRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LookRightLeftRate;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> m_LookRightLeftEase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LookRightLeftMaxRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LookRightLeftTime;
    
    ULookConfig();

};

