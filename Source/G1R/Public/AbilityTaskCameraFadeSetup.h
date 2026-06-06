#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAbilityTaskCameraFadeSetupLerpType.h"
#include "AbilityTaskCameraFadeSetup.generated.h"

USTRUCT(BlueprintType)
struct FAbilityTaskCameraFadeSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor M_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TargetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_FadeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAbilityTaskCameraFadeSetupLerpType m_LerpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LerpParam1;
    
    G1R_API FAbilityTaskCameraFadeSetup();
};

