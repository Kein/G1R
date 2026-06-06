#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GestureSetEntry.generated.h"

class UGestureSet;

USTRUCT(BlueprintType)
struct FGestureSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireAll;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireAllExact;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireAny;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireNone;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGestureSet> GestureSet;
    
    G1R_API FGestureSetEntry();
};

