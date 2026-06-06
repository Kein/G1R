#pragma once
#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "GameStateSubsystem.generated.h"

UCLASS(Abstract, MinimalAPI)
class UGameStateSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    GAMESTATESUBSYSTEM_API UGameStateSubsystem();

};

