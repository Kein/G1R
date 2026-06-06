#pragma once
#include "CoreMinimal.h"
#include "SentryContextGame.generated.h"

USTRUCT()
struct FSentryContextGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> OwnedGameplayTags;
    
    UPROPERTY()
    TArray<FString> ActiveAbilities;
    
    UPROPERTY()
    TMap<FString, float> NearbyCharacters;
    
    UPROPERTY()
    TMap<FName, float> NearbyInteractionSpots;
    
    G1R_API FSentryContextGame();
};

