#pragma once
#include "CoreMinimal.h"
#include "GothicModWorldPointCharacterSpawnCountMod.generated.h"

USTRUCT()
struct FGothicModWorldPointCharacterSpawnCountMod {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, int32> DifferenceByCharacter;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, int32> CountByCharacter;
    
    G1R_API FGothicModWorldPointCharacterSpawnCountMod();
};

