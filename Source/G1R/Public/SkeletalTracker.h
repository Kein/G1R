#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletalTracker.generated.h"

class AGothicCharacter;
class AGothicFootstepsTrackerActor;

UCLASS()
class USkeletalTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    AGothicFootstepsTrackerActor* TrackerActor;
    
    UPROPERTY(VisibleAnywhere)
    AGothicCharacter* Character;
    
public:
    USkeletalTracker();

};

