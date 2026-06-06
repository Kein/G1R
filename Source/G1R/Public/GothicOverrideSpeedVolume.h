#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GothicOverrideSpeedVolume.generated.h"

class AActor;

UCLASS()
class G1R_API AGothicOverrideSpeedVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    AGothicOverrideSpeedVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

