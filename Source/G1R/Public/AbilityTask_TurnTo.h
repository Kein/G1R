#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_TurnTo.generated.h"

class AActor;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_TurnTo;
class UGameplayAbility;
class UTurnOnSpotAssetConfig;

UCLASS()
class G1R_API UAbilityTask_TurnTo : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FRotator StartRotation;
    
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    float RealtimeTaskStarted;
    
    UPROPERTY(Instanced)
    UTurnOnSpotAssetConfig* TurnOnSpotAsset;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* TurnMontageTask;
    
public:
    UPROPERTY()
    float TurnDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngleDifferenceForUsingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngleDifferenceToSkipAnyTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TOptional<FVector> LerpToLocationWhileTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> EasingFunction;
    
    UAbilityTask_TurnTo();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TurnTo* TaskTurnToPosition(UGameplayAbility* OwningAbility, const FVector& position, float NewMinAngleDifferenceForUsingAnimation, float NewMinAngleDifferenceToSkipAnyTurn);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TurnTo* TaskTurnToDirection(UGameplayAbility* OwningAbility, const FVector& NewDirection, float NewMinAngleDifferenceForUsingAnimation, float NewMinAngleDifferenceToSkipAnyTurn);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TurnTo* TaskTurnToActor(UGameplayAbility* OwningAbility, const AActor* Actor, float NewMinAngleDifferenceForUsingAnimation, float NewMinAngleDifferenceToSkipAnyTurn);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPosition(const FVector& NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDirection(const FVector& NewDirection);
    
    UFUNCTION(BlueprintPure)
    float GetTurnDoneRatio() const;
    
};

