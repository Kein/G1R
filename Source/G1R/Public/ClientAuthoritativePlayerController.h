#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClientAuthoritativePlayerController.generated.h"

UCLASS()
class G1R_API AClientAuthoritativePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AClientAuthoritativePlayerController(const FObjectInitializer& ObjectInitializer);

};

