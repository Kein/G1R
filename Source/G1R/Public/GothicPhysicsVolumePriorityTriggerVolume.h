#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GothicPhysicsVolumePriority.h"
#include "GothicPhysicsVolumePriorityTriggerVolume.generated.h"

UCLASS()
class G1R_API AGothicPhysicsVolumePriorityTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGothicPhysicsVolumePriority> m_PhysicsVolumePriorities_OnBeginOverlap;
    
    UPROPERTY(EditAnywhere)
    TArray<FGothicPhysicsVolumePriority> m_PhysicsVolumePriorities_OnEndOverlap;
    
public:
    AGothicPhysicsVolumePriorityTriggerVolume(const FObjectInitializer& ObjectInitializer);

};

