#pragma once
#include "CoreMinimal.h"
#include "ArcheryComponent.h"
#include "BowComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UBowComponent : public UArcheryComponent {
    GENERATED_BODY()
public:
    UBowComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnReleaseAndNotchInterrupted();
    
};

