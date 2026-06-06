#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GothicFootstepsTrackerActor.generated.h"

class AGothicCharacter;
class APlayerController;
class UDecalComponent;
class UMaterialInterface;
class UPhysicMaterialsColor;
class USkeletalTracker;

UCLASS()
class G1R_API AGothicFootstepsTrackerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicMaterialsColor* PhysicMaterialsColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    float DecalSizeFactor;
    
    UPROPERTY(EditAnywhere)
    float DecalLifetime;
    
    UPROPERTY(Instanced)
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(EditAnywhere)
    int32 MaxFeetTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetectionRadius;
    
private:
    UPROPERTY()
    APlayerController* PlayerController;
    
    UPROPERTY()
    TMap<AGothicCharacter*, USkeletalTracker*> TrackedCharactersData;
    
public:
    AGothicFootstepsTrackerActor(const FObjectInitializer& ObjectInitializer);

};

