#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavigationTypes.h"
#include "EPathResultReason.h"
#include "GlobalPathingInfo.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGlobalPathingInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TEnumAsByte<ENavigationQueryResult::Type> Result;
    
    UPROPERTY()
    TArray<EPathResultReason> ResultReasons;
    
public:
    FGlobalPathingInfo();
};

