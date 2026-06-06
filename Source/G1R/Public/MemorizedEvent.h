#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
#include "InGameTime.h"
#include "MemorizedEvent.generated.h"

USTRUCT(BlueprintType)
struct FMemorizedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInGameTime Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInGameTime Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InstigatorGlobalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AffectedCharacterGlobalId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer EventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInstancedStruct Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UObject> OptionalClass1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UObject> OptionalClass2;
    
    G1R_API FMemorizedEvent();
};

