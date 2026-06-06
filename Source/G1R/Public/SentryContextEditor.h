#pragma once
#include "CoreMinimal.h"
#include "SentryContextEditor.generated.h"

USTRUCT()
struct FSentryContextEditor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> OpenAssets;
    
    G1R_API FSentryContextEditor();
};

