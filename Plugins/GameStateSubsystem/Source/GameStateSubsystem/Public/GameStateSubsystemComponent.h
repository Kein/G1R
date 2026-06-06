#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStateSubsystemComponent.generated.h"

UCLASS(ClassGroup=Custom, Within=GameStateBase, meta=(BlueprintSpawnableComponent))
class GAMESTATESUBSYSTEM_API UGameStateSubsystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameStateSubsystemComponent(const FObjectInitializer& ObjectInitializer);

};

