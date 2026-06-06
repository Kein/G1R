#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScriptableHLODBuildContext.generated.h"

class UActorComponent;
class UObject;
class UWorld;

USTRUCT(BlueprintType)
struct FScriptableHLODBuildContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UWorld* World;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UActorComponent*> SourceComponents;
    
    UPROPERTY(BlueprintReadOnly)
    UObject* AssetsOuter;
    
    UPROPERTY(BlueprintReadOnly)
    FString AssetsBaseName;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WorldPosition;
    
    UPROPERTY(BlueprintReadOnly)
    double MinVisibleDistance;
    
    G1R_API FScriptableHLODBuildContext();
};

