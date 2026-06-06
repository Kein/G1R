#pragma once
#include "CoreMinimal.h"
#include "GameStateSubsystem.h"
#include "TickableGameStateSubsystem.generated.h"

UCLASS(Abstract, MinimalAPI)
class UTickableGameStateSubsystem : public UGameStateSubsystem {
    GENERATED_BODY()
public:
    GAMESTATESUBSYSTEM_API UTickableGameStateSubsystem();

};

