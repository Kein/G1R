#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptWorldSubsystem.h"
#include "SavedMessages.generated.h"

class UObject;

UCLASS()
class G1R_API USavedMessages : public UScriptWorldSubsystem {
    GENERATED_BODY()
public:
    USavedMessages();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GlobalResendSavedDoorMessages(const UObject* WorldContextObject, FName connected);
    
};

