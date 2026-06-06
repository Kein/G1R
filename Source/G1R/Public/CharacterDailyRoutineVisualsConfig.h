#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DailyRoutineSimulationMesh.h"
#include "CharacterDailyRoutineVisualsConfig.generated.h"

UCLASS(Abstract, Const)
class UCharacterDailyRoutineVisualsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDailyRoutineSimulationMesh> Meshes;
    
    UCharacterDailyRoutineVisualsConfig();

};

