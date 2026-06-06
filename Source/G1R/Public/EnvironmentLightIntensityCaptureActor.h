#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentLightIntensityCaptureActor.generated.h"

class UEnvironmentLightIntensityCaptureComponent;

UCLASS()
class G1R_API AEnvironmentLightIntensityCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UEnvironmentLightIntensityCaptureComponent* EnvironmentLightIntensityComponent;
    
    AEnvironmentLightIntensityCaptureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UEnvironmentLightIntensityCaptureComponent* GetCaptureComponent() const;
    
};

