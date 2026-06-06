#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "GameplayTagContainer.h"
#include "ActorLightingChannels.h"
#include "CameraViewParameters.h"
#include "IndoorDetectionResult.h"
#include "IndoorDetectionSampler.h"
#include "LightValues.h"
#include "Templates/SubclassOf.h"
#include "ConversationCameraV2.generated.h"

class AActor;
class ADynamicNavObstacle;
class AEnvironmentLightIntensityCaptureActor;
class AGothicCharacter;
class APostProcessVolume;
class UCameraAnimationSequence;
class UConversationCameraLightingAdjuster;
class UConversationCameraPresetBase;
class UGothicConversationCameraModifier;
class UMaterialInterface;
class UMaterialParameterCollection;

UCLASS()
class G1R_API AConversationCameraV2 : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacter* ConversationInitiator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicCharacter* ConversationInitiatorPartner;
    
    UPROPERTY()
    AGothicCharacter* MainParticipant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIndoorDetectionSampler IndoorDetectionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRightSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APostProcessVolume* Volume;
    
    UPROPERTY(EditAnywhere, Instanced)
    UConversationCameraLightingAdjuster* LightingAdjuster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraViewParameters CurrentPresetParams;
    
    UPROPERTY()
    AEnvironmentLightIntensityCaptureActor* EnvironmentIntensityCaptureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> AdditionalLightMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UCameraAnimationSequence>> CameraAnimSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LastExternalLightIntensityScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LastExternalLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MonologTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentMonologTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceAlwaysOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceAlwaysInside;
    
    UPROPERTY()
    TArray<UConversationCameraPresetBase*> AllPresetInstances;
    
    UPROPERTY()
    TMap<AGothicCharacter*, bool> CharacterInShadowMap;
    
    UPROPERTY()
    float PreferredCharacterDistance;
    
    UPROPERTY()
    float ReferenceDistance;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FTransform> ParticipantIdealTransforms;
    
    UPROPERTY()
    FString FirstConversationTopicName;
    
protected:
    UPROPERTY()
    TArray<AGothicCharacter*> Participants;
    
    UPROPERTY()
    TMap<AGothicCharacter*, bool> ParticipantInsideResults;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultTestAmount;
    
    UPROPERTY(EditAnywhere)
    float ObstructionSweepTestSize;
    
    UPROPERTY(EditAnywhere)
    float ObstructionSweepTestCharacterDistance;
    
    UPROPERTY()
    AActor* LastCamera;
    
    UPROPERTY()
    TMap<AGothicCharacter*, FActorLightingChannels> InitialParticipantLightingChannels;
    
    UPROPERTY(EditAnywhere)
    int32 PresetReuseBuffer;
    
    UPROPERTY(EditAnywhere)
    bool bUseTagFallback;
    
    UPROPERTY(EditAnywhere)
    float ActorPositionThreshold;
    
    UPROPERTY(EditAnywhere)
    float ActorLerpSpeed;
    
    UPROPERTY()
    ADynamicNavObstacle* NavObstacleCameraView;
    
    UPROPERTY()
    ADynamicNavObstacle* NavObstacleParticipants;
    
    UPROPERTY()
    float InputAdjustmentRestrictionX;
    
    UPROPERTY()
    float InputAdjustmentRestrictionY;
    
    UPROPERTY()
    float NavObstacleCameraDistance;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> CinematicParameterCollection;
    
    UPROPERTY()
    TArray<UGothicConversationCameraModifier*> AppliedCameraModifiers;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(EditAnywhere)
    float AlphaFadeDistance;
    
    UPROPERTY(EditAnywhere)
    float AlphaFadePercentage;
    
    UPROPERTY(EditAnywhere)
    float AlphaFadeRadius;
    
    UPROPERTY()
    float AlphaFadeDistanceResetValue;
    
    UPROPERTY()
    float AlphaFadeOffsetResetValue;
    
    UPROPERTY()
    float EyeIntensityResetValue;
    
    UPROPERTY()
    float AlphaFadeRadiusResetValues;
    
    UPROPERTY()
    float FeetHeightAddedForObstructionCheck;
    
    UPROPERTY(EditAnywhere)
    FVector HideCharacterAroundCameraExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugShowSideChoiceTest;
    
public:
    AConversationCameraV2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void UpdateLightActors() const;
    
    UFUNCTION()
    void UpdateCinematicParameters(const bool IsEnabled, const float SafeDistancePercentage, const float DistanceFromCameraToShotCenter, const float FadeRadius, const float EyeIntensity);
    
    UFUNCTION()
    void StopCurrentCamAnimationSequence() const;
    
public:
    UFUNCTION()
    void SpawnAdditionalLight(const FLightValues& LightValues);
    
    UFUNCTION(BlueprintCallable)
    void SetValidRandomPresetByTag(AGothicCharacter* Speaker, AGothicCharacter* Listener, FGameplayTag PresetTag, const bool bIgnoreTransitionList);
    
protected:
    UFUNCTION()
    void SetPresetClasses();
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetPresetByName(const FName PresetName, AGothicCharacter* Speaker, AGothicCharacter* Listener, const bool bUseRandomSelectionChecks, const bool bForcePreset);
    
protected:
    UFUNCTION()
    void SetFoV(const float Value) const;
    
    UFUNCTION()
    void SetDefaultCameraPreset(AGothicCharacter* Speaker, AGothicCharacter* Listener, FGameplayTag LastPresetTag, bool bOnlyUseFallbackWithSameTag);
    
public:
    UFUNCTION()
    bool SetCurrentPreset(UConversationCameraPresetBase* NewPreset, AGothicCharacter* Speaker, AGothicCharacter* Listener);
    
protected:
    UFUNCTION()
    void SetCinematicResetParameters();
    
    UFUNCTION()
    void SetCineCamParameters() const;
    
    UFUNCTION()
    bool SetCameraAsViewTarget();
    
    UFUNCTION()
    void RemoveEnvironmentLightCapture();
    
    UFUNCTION()
    void RemoveAppliedCameraModifiers();
    
    UFUNCTION()
    void RemoveAppliedCameraModifier(UGothicConversationCameraModifier* CamMod);
    
public:
    UFUNCTION()
    float ReadEnvironmentLightCapture(const FVector& Direction) const;
    
protected:
    UFUNCTION()
    void PlayCurrentCamAnimationSequence();
    
    UFUNCTION()
    void MaterialDistanceFadeLoadingComplete();
    
    UFUNCTION()
    void LoadCamAnimationSequenceAsync();
    
    UFUNCTION()
    void LoadAlphaFadeMaterialAsync();
    
    UFUNCTION()
    void LoadAdditionalLightsMaterialAsync();
    
    UFUNCTION()
    bool IsPresetValid(UConversationCameraPresetBase* PresetParameters, AGothicCharacter* Speaker, AGothicCharacter* Listener, const bool bDoChecksForRandomSelection) const;
    
    UFUNCTION()
    void InvertPresetToCorrectSide(UConversationCameraPresetBase* Preset, AGothicCharacter* Speaker, AGothicCharacter* Listener) const;
    
    UFUNCTION()
    void HideParticipants();
    
    UFUNCTION()
    void HideNearbyCharactersIfNeeded();
    
    UFUNCTION()
    void HandleLightMaterialLoadingComplete();
    
    UFUNCTION()
    void HandleIndoorDetectionResultsAvailable(const FIndoorDetectionResult& Result, TWeakObjectPtr<AGothicCharacter> Participant);
    
    UFUNCTION()
    void HandleAnimationSequenceComplete();
    
    UFUNCTION()
    UConversationCameraPresetBase* GetWeightedRandomPresetFromSelection(TArray<UConversationCameraPresetBase*>& Presets) const;
    
    UFUNCTION()
    UConversationCameraPresetBase* GetRandomPresetFromSelectionNoWeight(TArray<UConversationCameraPresetBase*>& Presets) const;
    
    UFUNCTION()
    UConversationCameraPresetBase* GetPresetByName(FName PresetName) const;
    
    UFUNCTION()
    UConversationCameraPresetBase* GetPresetByClass(const TSubclassOf<UConversationCameraPresetBase>& PresetSubClass) const;
    
public:
    UFUNCTION()
    TArray<AGothicCharacter*> GetParticipants() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UCameraAnimationSequence> GetCamAnimationSequence(const FName SequenceName) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> GetAdditionalLightMaterial(const FName MaterialName) const;
    
protected:
    UFUNCTION()
    void ForceCaptureEnvironmentLightIfNeeded();
    
    UFUNCTION()
    void DoWhenPresetChanges();
    
    UFUNCTION()
    void DoAfterNewCamPositionWasApplied();
    
    UFUNCTION()
    void ChooseCameraSide(const AGothicCharacter* Speaker, const AGothicCharacter* Listener);
    
public:
    UFUNCTION()
    void CameraStop();
    
    UFUNCTION()
    void CameraStart(AGothicCharacter* InitiatingParticipant, AGothicCharacter* Listener);
    
protected:
    UFUNCTION()
    void AttachEnvironmentLightCapture();
    
    UFUNCTION()
    void ApplyCameraModifiers();
    
public:
    UFUNCTION()
    void AddParticipant(AGothicCharacter* NewParticipant);
    
protected:
    UFUNCTION()
    bool ActorIsAdditionalParticipant(AGothicCharacter* Participant) const;
    
};

