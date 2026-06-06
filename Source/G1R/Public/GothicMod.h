#pragma once
#include "CoreMinimal.h"
#include "GothicModMapModifications.h"
#include "GothicModScriptDefaultModifications.h"
#include "GothicMod.generated.h"

USTRUCT(BlueprintType)
struct FGothicMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FGothicModMapModifications> MapModificationsByMapName;
    
    UPROPERTY(BlueprintReadOnly)
    FGothicModScriptDefaultModifications ClassDefaultsMods;
    
    G1R_API FGothicMod();
};

