#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_AlignCharacterAtLocation.generated.h"

class UAbilityTask_AlignCharacterAtLocation;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_AlignCharacterAtLocation : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TOptional<FRotator> TargetRotation;
    
    UPROPERTY()
    double Duration;
    
    UPROPERTY()
    FVector StartLocation;
    
    UPROPERTY()
    FRotator StartRotation;
    
    UPROPERTY()
    float SecondsMoved;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> EasingFunction;
    
    UAbilityTask_AlignCharacterAtLocation();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_AlignCharacterAtLocation* TaskAlignCharacterAtLocation(UGameplayAbility* OwningAbility, const FVector& NewTargetLocation, FRotator NewTargetRotation, float IntendedDuration, bool NewBOnFloor);
    
};

