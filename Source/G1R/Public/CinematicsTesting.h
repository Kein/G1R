#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CinematicsTesting.generated.h"

class UMaterialParameterCollection;

UCLASS()
class G1R_API ACinematicsTesting : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool IsEnabled;
    
    UPROPERTY(EditAnywhere)
    float SafeDistancePercentage;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromCameraToShotCenter;
    
    UPROPERTY(EditAnywhere)
    float FadeRadius;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> CinematicParameterCollection;
    
public:
    ACinematicsTesting(const FObjectInitializer& ObjectInitializer);

};

