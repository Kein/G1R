#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "SpatialEnvironmentSubsystem.generated.h"

class AActor;

UCLASS(BlueprintType)
class G1R_API USpatialEnvironmentSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USpatialEnvironmentSubsystem();

    UFUNCTION(BlueprintCallable)
    bool IsLocationRoofed(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsActorRoofed(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAreaAtLocation(const FVector& Location) const;
    
};

