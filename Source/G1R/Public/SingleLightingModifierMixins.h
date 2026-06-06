#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SingleLightModifier.h"
#include "SingleLightingModifierMixins.generated.h"

UCLASS()
class USingleLightingModifierMixins : public UObject {
    GENERATED_BODY()
public:
    USingleLightingModifierMixins();

    UFUNCTION()
    static void SetIntensityReplace(FSingleLightModifier& Light, const float Value);
    
    UFUNCTION()
    static void SetIntensityPercent(FSingleLightModifier& Light, const float Value);
    
    UFUNCTION()
    static void SetIntensityFlat(FSingleLightModifier& Light, const float Value);
    
    UFUNCTION()
    static void SetColorReplace(FSingleLightModifier& Light, const FVector& Value);
    
    UFUNCTION()
    static void SetColorFlat(FSingleLightModifier& Light, const FVector& Value);
    
    UFUNCTION()
    static float GetIntensityReplace(const FSingleLightModifier& Light);
    
    UFUNCTION()
    static float GetIntensityPercent(const FSingleLightModifier& Light);
    
    UFUNCTION()
    static float GetIntensityFlat(const FSingleLightModifier& Light);
    
    UFUNCTION()
    static FVector GetColorReplace(const FSingleLightModifier& Light);
    
    UFUNCTION()
    static FVector GetColorFlat(const FSingleLightModifier& Light);
    
};

