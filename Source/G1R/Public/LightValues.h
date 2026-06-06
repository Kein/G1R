#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "EConversationCameraRelativeParticipant.h"
#include "LightingChannelsEditable.h"
#include "LightValues.generated.h"

USTRUCT(BlueprintType)
struct FLightValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve LightPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeVectorCurve LightRotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve LightIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LightTransform;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightingChannelsEditable LightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LightMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationCameraRelativeParticipant RelativeParticipant;
    
    G1R_API FLightValues();
};

