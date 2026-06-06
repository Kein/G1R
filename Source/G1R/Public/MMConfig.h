#pragma once
#include "CoreMinimal.h"
#include "InputProfile.h"
#include "GothicBaseConfig.h"
#include "MMConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UMMConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInputProfile m_ProfileGeneral;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInputProfile m_ProfileStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInputProfile m_ProfileSprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInputProfile m_ProfileStealthGeneral;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInputProfile m_ProfileStealthStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CamVelMultiplier;
    
    UMMConfig();

};

