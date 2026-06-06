#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "EConversationCameraShotMode.h"
#include "LightValues.h"
#include "LightingChannelsEditable.h"
#include "LightSet.generated.h"

USTRUCT(BlueprintType)
struct FLightSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightValues KeyLightParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightValues RimLightParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightValues KeyReverseLightParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightValues RimReverseLightParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLightValues> AdditionalLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarnDoorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarnDoorLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IndirectLightingIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightingChannelsEditable SpeakerLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightingChannelsEditable ListenerLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightingChannelsEditable AdditionalParticipantLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightUnits LightUnitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationCameraShotMode ShotMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DiffuseColorBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeIntensity;
    
    G1R_API FLightSet();
};

