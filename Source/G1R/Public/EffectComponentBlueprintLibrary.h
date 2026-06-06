#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "EWalkSpeed.h"
#include "EffectComponentBlueprintLibrary.generated.h"

class AGothicCharacter;

UCLASS(BlueprintType)
class G1R_API UEffectComponentBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEffectComponentBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetCustomAnimGlobalRateScale(AGothicCharacter* GothicCharacter, float CustomRate);
    
    UFUNCTION(BlueprintCallable)
    static void ForceRestoreAnimGlobalRate(AGothicCharacter* GothicCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTargetData_WalkSpeed(FGameplayEventData& EventData, EWalkSpeed Speed);
    
};

