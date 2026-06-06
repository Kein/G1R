#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MMOptimisationModule.generated.h"

class UMotionDataAsset;

UCLASS()
class MOTIONSYMPHONY_API UMMOptimisationModule : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMotionDataAsset* ParentMotionDataAsset;
    
    UPROPERTY()
    bool bIsProcessed;
    
    UMMOptimisationModule();

};

