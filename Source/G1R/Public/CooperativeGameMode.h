#pragma once
#include "CoreMinimal.h"
#include "MultiplayerGameMode.h"
#include "CooperativeGameMode.generated.h"

UCLASS(NonTransient)
class G1R_API ACooperativeGameMode : public AMultiplayerGameMode {
    GENERATED_BODY()
public:
    ACooperativeGameMode(const FObjectInitializer& ObjectInitializer);

};

