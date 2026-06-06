#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "IndoorDetectionSampler.h"
#include "IndoorDetectionComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UIndoorDetectionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DetectionUpdatedAtTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bDetectedIsIndoor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bDetectedIsOutdoor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DetectionConfidence;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DetectionScore;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector PositiveAxisFreeRatio;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector NegativeAxisFreeRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetectionAveragingWindowSizeSeconds;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateOnMove;
    
    UPROPERTY(EditAnywhere)
    FIndoorDetectionSampler DetectionSettings;
    
    UIndoorDetectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestDetectionSampleAtTransform(const FTransform& QueryTransform);
    
    UFUNCTION(BlueprintCallable)
    void RequestDetectionSampleAt(const FVector& QueryLocation);
    
    UFUNCTION(BlueprintCallable)
    void RequestDetectionSample();
    
    UFUNCTION(BlueprintPure)
    bool HasRecentDetectionResult(float MaxAgeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyValidDetectionResults() const;
    
};

