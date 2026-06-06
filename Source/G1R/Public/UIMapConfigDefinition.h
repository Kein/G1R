#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UIMapConfigDefinition.generated.h"

class UItemDefinition;
class UTexture2D;

UCLASS(BlueprintType)
class G1R_API UUIMapConfigDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag MapTag;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D UICustomSize;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> MapTexture;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> MapOverlayedTexture;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> MapOffsetTexture;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<TSubclassOf<UItemDefinition>> NeededItemsClasses;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MapVersion;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsPlayerInMap;
    
    UPROPERTY()
    TArray<FColor> ColorArrayOffset;
    
    UUIMapConfigDefinition();

};

