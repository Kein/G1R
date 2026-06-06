#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Engine/LatentActionManager.h"
#include "GothicAsyncTraceLibrary.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class G1R_API UGothicAsyncTraceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicAsyncTraceLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AsyncLineTraceSingle(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& OutHit, bool bIgnoreSelf);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AsyncLineTraceMulti(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TArray<FHitResult>& OutHits, bool bIgnoreSelf);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AsyncBatchLineTrace(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVector> Starts, TArray<FVector> Ends, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TArray<FHitResult>& OutBlockingHits, TArray<FHitResult>& OutNonHits, bool bIgnoreSelf);
    
};

