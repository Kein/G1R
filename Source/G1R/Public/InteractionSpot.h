#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
#include "EInteractionSpotEntryDirection.h"
#include "InteractionSpot.generated.h"

class AActor;
class UDataLayerAsset;

USTRUCT(BlueprintType)
struct G1R_API FInteractionSpot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PossibleActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowAnyOrientationWhenUsing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowChainingActions;
    
    UPROPERTY(BlueprintReadWrite)
    EInteractionSpotEntryDirection EntryDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumAllowedUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AActor> ActorToInteractWith;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UDataLayerAsset> DataLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LastTimeUsed;
    
    UPROPERTY()
    TArray<FInstancedStruct> CustomRequirements;
    
    FInteractionSpot();
};

