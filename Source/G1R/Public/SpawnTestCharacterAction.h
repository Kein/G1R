#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GothicCharacterStateCharacterVisualsSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SpawnTestCharacterAction.generated.h"

class AGothicCharacter;
class AGothicNPCState;
class UAIState_DailyRoutine;
class UObject;
class USpawnAIAgentDefinition;
class USpawnTestCharacterAction;

UCLASS()
class G1R_API USpawnTestCharacterAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<USpawnAIAgentDefinition> spawnDef;
    
    UPROPERTY()
    TSubclassOf<UAIState_DailyRoutine> DailyRoutineClass;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY(BlueprintAssignable)
    FGothicCharacterStateCharacterVisualsSpawned OnCharacterVisualsSpawned;
    
    USpawnTestCharacterAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawnTestCharacterAction* SpawnTestCharacter(const UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> NewSpawnDef, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, const FTransform& NewTransform);
    
protected:
    UFUNCTION()
    void HandleCharacterSpawned(AGothicNPCState* CharacterState, AGothicCharacter* Character);
    
};

