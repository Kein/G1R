#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "TargetActor_Trace.generated.h"

UCLASS(Config=Engine)
class G1R_API ATargetActor_Trace : public AGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FCollisionProfileName TraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceAffectsAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxHitResultsPerTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreBlockingHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceFromPlayerViewPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePersistentHitResults;
    
    ATargetActor_Trace(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStartLocation(const FGameplayAbilityTargetingLocationInfo& InStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldProduceTargetDataOnServer(bool bInShouldProduceTargetDataOnServer);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyOnConfirmation(bool bInDestroyOnConfirmation);
    
};

