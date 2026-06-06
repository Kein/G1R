#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotRequirements.h"
#include "InventoryItemRequirements.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FInventoryItemRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ItemTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequireMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequireMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    FInventoryItemRequirements();
};

