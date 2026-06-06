#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MotionSymphonySettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MOTIONSYMPHONY_API UMotionSymphonySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> TraitNames;
    
    UMotionSymphonySettings();

};

