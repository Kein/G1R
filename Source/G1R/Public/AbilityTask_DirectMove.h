#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_DirectMove.generated.h"

class UAbilityTask_DirectMove;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_DirectMove : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    FVector TargetLocation;
    
    UPROPERTY()
    float ReachDistance;
    
    UPROPERTY()
    float ProjectionRadius;
    
    UPROPERTY()
    bool bProjectTargetLocation;
    
public:
    UAbilityTask_DirectMove();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DirectMove* TaskDirectMoveTowardsNavMeshLocation(UGameplayAbility* OwningAbility, const FVector& NewTargetLocation, float NewReachDistance, float NewProjectionRadius);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DirectMove* TaskDirectMoveTowardsLocation(UGameplayAbility* OwningAbility, const FVector& NewTargetLocation, float NewReachDistance);
    
};

