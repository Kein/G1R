#pragma once
#include "CoreMinimal.h"
#include "SentryContexts.h"
#include "SentryUser.h"
#include "SentryReportData.generated.h"

USTRUCT(BlueprintType)
struct FSentryReportData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Release;
    
    UPROPERTY()
    FString Environment;
    
    UPROPERTY()
    TMap<FString, FString> Tags;
    
    UPROPERTY()
    FSentryUser User;
    
    UPROPERTY()
    FSentryContexts Contexts;
    
    G1R_API FSentryReportData();
};

