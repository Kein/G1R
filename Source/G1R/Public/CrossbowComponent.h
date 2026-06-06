#pragma once
#include "CoreMinimal.h"
#include "ArcheryComponent.h"
#include "CrossbowComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UCrossbowComponent : public UArcheryComponent {
    GENERATED_BODY()
public:
    UCrossbowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WantToShoot();
    
private:
    UFUNCTION(Reliable, Server)
    void ServerNotchArrowOntoBow(bool isAfterRelease);
    
    UFUNCTION()
    void OnReleaseInterrupted();
    
    UFUNCTION()
    void OnReleaseCompleted();
    
};

