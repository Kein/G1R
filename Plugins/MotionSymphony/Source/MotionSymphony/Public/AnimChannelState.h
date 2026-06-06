#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBlendStatus.h"
#include "EMotionAnimAssetType.h"
#include "AnimChannelState.generated.h"

USTRUCT()
struct MOTIONSYMPHONY_API FAnimChannelState {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float HighestWeight;
    
    UPROPERTY()
    int32 AnimId;
    
    UPROPERTY()
    EMotionAnimAssetType AnimType;
    
    UPROPERTY()
    int32 StartPoseId;
    
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    FVector2D BlendSpacePosition;
    
    UPROPERTY()
    float Age;
    
    UPROPERTY()
    float DecayAge;
    
    UPROPERTY()
    float AnimTime;
    
    UPROPERTY()
    EBlendStatus BlendStatus;
    
    UPROPERTY()
    bool bLoop;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    bool bMirrored;
    
    UPROPERTY()
    float AnimLength;
    
    UPROPERTY()
    int32 CachedTriangulationIndex;
    
    FAnimChannelState();
};

