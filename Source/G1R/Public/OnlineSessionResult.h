#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineSessionFindResult.h"
#include "OnlineSessionResult.generated.h"

UCLASS(BlueprintType)
class G1R_API UOnlineSessionResult : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FOnlineSessionFindResult Result;
    
    UOnlineSessionResult();

};

