#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "GothicCameraSpringArmComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGothicCameraSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BaseTargetArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraRotationLagSpeedPitch;
    
    UGothicCameraSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

