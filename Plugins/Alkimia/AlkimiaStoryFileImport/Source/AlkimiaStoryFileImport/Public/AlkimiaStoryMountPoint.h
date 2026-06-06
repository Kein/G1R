#pragma once
#include "CoreMinimal.h"
#include "AlkimiaStoryMountPoint.generated.h"

USTRUCT(BlueprintType)
struct FAlkimiaStoryMountPoint {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString MountPoint;
    
    UPROPERTY(Config)
    FString MountPath;
    
    ALKIMIASTORYFILEIMPORT_API FAlkimiaStoryMountPoint();
};

