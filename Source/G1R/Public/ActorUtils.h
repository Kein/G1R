#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "ActorUtils.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class G1R_API UActorUtils : public UObject {
    GENERATED_BODY()
public:
    UActorUtils();

private:
    UFUNCTION(BlueprintCallable)
    static void SetComponentAffectsNavigation(UPrimitiveComponent* TargetComponent, bool ActivateNavigation);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigationForActor(const AActor* Actor, bool DoesAffectNavigation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceToActor(const AActor* Actor, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, const UObject* WorldContextObject, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, FHitResult& OutHit);
    
};

