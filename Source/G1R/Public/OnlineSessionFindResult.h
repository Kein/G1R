#pragma once
#include "CoreMinimal.h"
#include "OnlineSessionFindResult.generated.h"

USTRUCT(BlueprintType)
struct FOnlineSessionFindResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SessionId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString serverName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 numOpenPublicConnections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 pingInMs;
    
    G1R_API FOnlineSessionFindResult();
};

