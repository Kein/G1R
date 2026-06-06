#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MagnetComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UMagnetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMagnetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRootMotionMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintPure)
    float GetRootMotionMultiplier() const;
    
};

