#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFreepointType.h"
#include "EInteractionSpotEntryDirection.h"
#include "FreepointActionTags_DEPRECATED.h"
#include "FreepointUsageRestriction_DEPRECATED.h"
#include "Templates/SubclassOf.h"
#include "FreepointConfig_DEPRECATED.generated.h"

class AActor;
class UNavArea;

USTRUCT(BlueprintType)
struct FFreepointConfig_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LevelName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EFreepointType FreepointType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanChainAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowAnyOrientationWhenUsing;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFreepointUsageRestriction_DEPRECATED UsageRestriction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFreepointActionTags_DEPRECATED Actions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<AActor> InteractObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EInteractionSpotEntryDirection EntryDirection;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseActionTagsForInteractObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<TSubclassOf<UNavArea>> OnNavAreas;
    
    G1R_API FFreepointConfig_DEPRECATED();
};

