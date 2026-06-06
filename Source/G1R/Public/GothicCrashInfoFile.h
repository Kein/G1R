#pragma once
#include "CoreMinimal.h"
#include "SentryContextGame.h"
#include "SentryContextStack.h"
#include "SentryContextStringStack.h"
#include "GothicCrashInfoFile.generated.h"

USTRUCT(BlueprintType)
struct FGothicCrashInfoFile {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSentryContextGame Game;
    
    UPROPERTY()
    TMap<FString, FString> Quests;
    
    UPROPERTY()
    TMap<FName, int32> Inventory;
    
    UPROPERTY()
    TMap<FString, FSentryContextStack> ThreadStacks;
    
    UPROPERTY()
    TMap<int32, FSentryContextStringStack> ContextStackByThreadID;
    
    G1R_API FGothicCrashInfoFile();
};

