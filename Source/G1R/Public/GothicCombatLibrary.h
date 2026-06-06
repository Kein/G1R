#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GothicCombatLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class UGothicCombatLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicCombatLibrary();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetDirectionToTarget(const AActor* A, const FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetDirection(const AActor* A, const AActor* B);
    
};

