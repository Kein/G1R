#include "GothicAsyncTraceLibrary.h"

UGothicAsyncTraceLibrary::UGothicAsyncTraceLibrary() {
}

void UGothicAsyncTraceLibrary::AsyncLineTraceSingle(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& OutHit, bool bIgnoreSelf) {
}

void UGothicAsyncTraceLibrary::AsyncLineTraceMulti(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TArray<FHitResult>& OutHits, bool bIgnoreSelf) {
}

void UGothicAsyncTraceLibrary::AsyncBatchLineTrace(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVector> Starts, TArray<FVector> Ends, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TArray<FHitResult>& OutBlockingHits, TArray<FHitResult>& OutNonHits, bool bIgnoreSelf) {
}


