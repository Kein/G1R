#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "GothicCrashInfoFile.h"
#include "SentryReportData.h"
#include "GothicCrashReportSubsystem.generated.h"

UCLASS()
class G1R_API UGothicCrashReportSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSentryReportData SentryData;
    
    UPROPERTY()
    FGothicCrashInfoFile SentryFile;
    
    UGothicCrashReportSubsystem();

};

