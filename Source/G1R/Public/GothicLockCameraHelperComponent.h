#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GothicLockCameraHelperComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGothicLockCameraHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> m_targetActor;
    
    UPROPERTY(EditAnywhere)
    float m_CameraDistance;
    
    UPROPERTY(EditAnywhere)
    FRotator m_RotationOffset;
    
    UGothicLockCameraHelperComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ApplyCameraSettings();
    
};

