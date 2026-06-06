#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "Abilities/GameplayAbilityWorldReticle.h"
#include "TargetActor_Trace.h"
#include "Templates/SubclassOf.h"
#include "TargetActor_SphereTrace.generated.h"

class AGameplayAbilityWorldReticle;

UCLASS()
class G1R_API ATargetActor_SphereTrace : public ATargetActor_Trace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceSphereRadius;
    
    ATargetActor_SphereTrace(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Configure(const FGameplayAbilityTargetingLocationInfo& InStartLocation, FCollisionProfileName InTraceProfile, FGameplayTargetDataFilterHandle InFilter, TSubclassOf<AGameplayAbilityWorldReticle> InReticleClass, const FWorldReticleParameters& InReticleParams, bool bInIgnoreBlockingHits, bool bInShouldProduceTargetDataOnServer, bool bInUsePersistentHitResults, bool bInDebug, bool bInTraceAffectsAimPitch, bool bInTraceFromPlayerViewPoint, float InMaxRange, float InTraceSphereRadius, int32 InMaxHitResultsPerTrace);
    
};

