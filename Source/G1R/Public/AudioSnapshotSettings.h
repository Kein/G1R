#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AudioSnapshotSettings.generated.h"

class UFMODSnapshotReverb;

UCLASS(Abstract)
class UAudioSnapshotSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag SnapshotTag;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UFMODSnapshotReverb> FMODEventPath;
    
    UAudioSnapshotSettings();

};

