#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OcclusionSamplePoint.h"
#include "GothicAudioOcclusionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicAudioOcclusionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOcclusionSamplePoint> SamplePoints;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugLines;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugTarget;
    
    UGothicAudioOcclusionComponent(const FObjectInitializer& ObjectInitializer);

};

