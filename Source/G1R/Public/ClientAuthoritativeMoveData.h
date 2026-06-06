#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "ClientAuthoritativeMoveData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FClientAuthoritativeMoveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize10 Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    FVector_NetQuantize10 Velocity;
    
    UPROPERTY()
    FRotator ControlRotation;
    
    UPROPERTY()
    uint8 MovementMode;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* BasedMovementBase;
    
    UPROPERTY()
    FName BasedMovementBaseBoneName;
    
    UPROPERTY()
    bool bBasedHasRelativeRotation;
    
    UPROPERTY()
    bool bHasOverrideRootMotion;
    
    UPROPERTY()
    bool bCrouching;
    
    UPROPERTY()
    bool bHasTimestamp;
    
    UPROPERTY()
    float Timestamp;
    
    UPROPERTY()
    FVector_NetQuantize10 InputVector;
    
    UPROPERTY()
    float SpeedForCurve;
    
    UPROPERTY()
    float NewMaxSpeed;
    
    G1R_API FClientAuthoritativeMoveData();
};

