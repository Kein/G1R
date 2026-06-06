#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GothicFlyDiveSettings.h"
#include "GothicFlyDiveSettingsFunctionLibrary.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class UGothicFlyDiveSettingsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicFlyDiveSettingsFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetFlyDiveModeToDivergeNever(FGothicFlyDiveSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlyDiveModeToDivergeHybrid(FGothicFlyDiveSettings& Settings, float UseFlyDiveMinDistance, float GroundedMoveBeforeGoalDistance);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlyDiveModeToAlwaysFly(FGothicFlyDiveSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdaptHeightRelativeToNavGround(FGothicFlyDiveSettings& Settings, float ZDivergeOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdaptHeightRelativeToCharacter(FGothicFlyDiveSettings& Settings, ACharacter* RelativeCharacter, float ZDivergeOffset);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdaptHeightAutomatic(FGothicFlyDiveSettings& Settings);
    
};

