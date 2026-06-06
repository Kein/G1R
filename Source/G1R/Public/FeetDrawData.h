#pragma once
#include "CoreMinimal.h"
#include "BoneFeetData.h"
#include "BoneTrackedData.h"
#include "FeetDrawData.generated.h"

class AGothicFootstepsTrackerActor;
class USkeletalMeshComponent;

USTRUCT()
struct FFeetDrawData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AGothicFootstepsTrackerActor* TrackerActor;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* Component;
    
    UPROPERTY(EditAnywhere)
    bool bOnGround;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    FBoneFeetData FootData;
    
    UPROPERTY(EditAnywhere)
    FBoneTrackedData TrackData;
    
    G1R_API FFeetDrawData();
};

