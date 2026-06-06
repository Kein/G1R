#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelScriptActorMixins.generated.h"

class ALevelScriptActor;

UCLASS(BlueprintType)
class G1R_API ULevelScriptActorMixins : public UObject {
    GENERATED_BODY()
public:
    ULevelScriptActorMixins();

    UFUNCTION(BlueprintCallable)
    static bool RaiseLevelScriptEvent(ALevelScriptActor* LevelScriptActor, FName EventName);
    
};

