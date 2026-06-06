#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Templates/SubclassOf.h"
#include "GothicGameMode.generated.h"

class UDifficultyPreset;
class UGameStory;

UCLASS(NonTransient)
class G1R_API AGothicGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameStory> MainStoryClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDifficultyPreset> DifficultyPresetOverride;
    
    AGothicGameMode(const FObjectInitializer& ObjectInitializer);

};

