#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LightSet.h"
#include "LightValues.h"
#include "SingleLightModifier.h"
#include "ConversationCameraLightingAdjuster.generated.h"

class AGothicCharacter;
class ULightComponent;
class ULightingModifier;
class UWorld;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UConversationCameraLightingAdjuster : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ULightingModifier*> CurrentlySelectedModifiers;
    
    UPROPERTY(Instanced)
    TArray<ULightComponent*> IgnoredLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceAlwaysOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceAlwaysInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDaytimeIntensityLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDaytimeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableLocationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableWeatherModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSkinToneModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableExternalLightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableShotModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableParticipantNumberModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableShadowModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableFogModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSceneBrightnessModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSceneUniqueAreaModifer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RoughKeyLightReferenceIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeIntensityBaseValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULightingModifier*> AllModifiers;
    
    UPROPERTY()
    AGothicCharacter* CurrentSpeaker;
    
    UPROPERTY()
    AGothicCharacter* CurrentListener;
    
public:
    UConversationCameraLightingAdjuster(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void SetModifierClasses();
    
    UFUNCTION()
    void SelectCurrentModifiers(AGothicCharacter* Speaker, AGothicCharacter* Listener, const TArray<AGothicCharacter*>& AllParticipants);
    
    UFUNCTION()
    TArray<FLightValues> GetAdditionalLightValuesFromCurrentModifiers() const;
    
protected:
    UFUNCTION()
    void ApplyModifierToLightSet(FLightSet& OutputLightValues, ULightingModifier* Modifier) const;
    
    UFUNCTION()
    void ApplyModifierToLight(FLightValues& OutputLightValues, FLightValues& OriginalLightValues, FSingleLightModifier& Modifier);
    
public:
    UFUNCTION()
    void ApplyCurrentModifiers(FLightSet& LightValueSet, const UWorld* World, AGothicCharacter* Speaker, AGothicCharacter* Listener);
    
};

