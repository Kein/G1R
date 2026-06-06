#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "MultiplayerGameSession.generated.h"

UCLASS()
class G1R_API AMultiplayerGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AMultiplayerGameSession(const FObjectInitializer& ObjectInitializer);

};

