#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpawningRequest.generated.h"

class AActor;

UCLASS(BlueprintType)
class G1R_API USpawningRequest : public UObject {
    GENERATED_BODY()
public:
    USpawningRequest();

    UFUNCTION(BlueprintPure)
    AActor* GetSpawnedEntity() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate(float Delay);
    
};

