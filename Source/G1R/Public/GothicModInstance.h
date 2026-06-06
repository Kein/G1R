#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InteractionSpotHandle.h"
#include "GothicModInstance.generated.h"

class UGothicModPackage;
class ULevelStreamingDynamic;

UCLASS()
class G1R_API UGothicModInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGothicModPackage* ModPackage;
    
    UPROPERTY()
    TArray<ULevelStreamingDynamic*> AddedLevels;
    
    UPROPERTY()
    TArray<FInteractionSpotHandle> AddedInteractionSpots;
    
    UGothicModInstance();

};

