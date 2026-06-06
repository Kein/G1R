#pragma once
#include "CoreMinimal.h"
#include "GothicModWorldPointCharacterSpawnCountMod.h"
#include "GothicModWorldPointMod.generated.h"

USTRUCT()
struct FGothicModWorldPointMod {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FGothicModWorldPointCharacterSpawnCountMod> Points;
    
    G1R_API FGothicModWorldPointMod();
};

