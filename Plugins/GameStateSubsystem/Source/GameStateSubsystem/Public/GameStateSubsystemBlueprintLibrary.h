#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "GameStateSubsystemBlueprintLibrary.generated.h"

class AGameStateBase;
class UGameStateSubsystem;
class UObject;

UCLASS(BlueprintType)
class UGameStateSubsystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameStateSubsystemBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static UGameStateSubsystem* GetGameStateSubsystemFromGameState(AGameStateBase* GameState, TSubclassOf<UGameStateSubsystem> Class);
    
    UFUNCTION(BlueprintPure)
    static UGameStateSubsystem* GetGameStateSubsystem(UObject* ContextObject, TSubclassOf<UGameStateSubsystem> Class);
    
};

