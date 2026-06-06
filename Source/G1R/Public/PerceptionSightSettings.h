#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CoffinSenseShape.h"
#include "SixthSenseShape.h"
#include "PerceptionSightSettings.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionSightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCoffinSenseShape InnerCoffin;
    
    UPROPERTY(EditAnywhere)
    FCoffinSenseShape OuterCoffin;
    
    UPROPERTY(EditAnywhere)
    FSixthSenseShape SixthSense;
    
    UPROPERTY(EditAnywhere)
    float MinLightIntensity;
    
    UPROPERTY(EditAnywhere)
    float MaxLightIntensity;
    
    UPROPERTY(EditAnywhere)
    float MinLightModifier;
    
    UPROPERTY(EditAnywhere)
    float MaxLightModifier;
    
    UPROPERTY(EditAnywhere)
    float WeatherModifier[5];
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> MovementModifier;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> MovementModeModifier;
    
    UPROPERTY(EditAnywhere)
    float MovementModeDefaultModifier;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> TargetOwnedTagModifiers;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> SensingOwnedTagModifiers;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ExcludingTags;
    
    UPROPERTY(EditAnywhere)
    bool LoseAwarenessWithExcludingTags;
    
    UPROPERTY(EditAnywhere)
    float SenseModifier;
    
    UPROPERTY(EditAnywhere)
    float SenseModifierThreshold;
    
    UPROPERTY(EditAnywhere)
    float AwarenessWearoffFactorNoLineOfSight;
    
    UPROPERTY(EditAnywhere)
    float AwarenessWearoffFactorOutOfShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequiresFreeLineOfSight;
    
    UPROPERTY(EditAnywhere)
    float PeripheralHalfAngle;
    
    UPROPERTY(EditAnywhere)
    float MiniMalFocusDistance;
    
    UPROPERTY(EditAnywhere)
    float HeightParabolAlpha;
    
    UPROPERTY(EditAnywhere)
    float HeightParabolOffsetY;
    
    UPROPERTY(EditAnywhere)
    float HeightParabolOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float ParabolMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAwarenessWearOffWithSensorTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAwarenessWearOffWithSensedTags;
    
    G1R_API FPerceptionSightSettings();
};

