#pragma once
#include "CoreMinimal.h"
#include "CineCameraSettings.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "GameplayTagContainer.h"
#include "EConversationCameraFocusMode.h"
#include "EConversationCameraFocusTarget.h"
#include "EConversationCameraHideMode.h"
#include "EConversationCameraLoopMode.h"
#include "EConversationMultiParticipantMode.h"
#include "LightSet.h"
#include "PresetTransitionEntry.h"
#include "Templates/SubclassOf.h"
#include "ConversationCameraPresetBase.generated.h"

class AActor;
class ACameraActor;
class AGothicCharacter;
class UConversationCameraLightingAdjuster;
class UGameplayAbilityConversationV2;
class UGothicConversationCameraModifier;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class G1R_API UConversationCameraPresetBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AssociatedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLightSet LightingParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PriorityInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPresetTransitionEntry> PossibleTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UGothicConversationCameraModifier>> CameraModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitialChoiceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationCameraHideMode HideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationCameraLoopMode LoopMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationCameraFocusMode FocusMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationCameraFocusTarget PitchAdjustTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationMultiParticipantMode MultiConversationValidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreSideInvertsFromCamera;
    
    UPROPERTY(EditAnywhere)
    bool bInvertSide;
    
    UPROPERTY(EditAnywhere)
    bool bNeverUseForReverseShot;
    
    UPROPERTY(EditAnywhere)
    bool bViableForAdditionalParticipants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AnimSequenceName;
    
    UPROPERTY(BlueprintReadWrite)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AActor> ReferencePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStaticActorTransforms;
    
    UPROPERTY()
    FTransform FirstSpeakerTransform;
    
    UPROPERTY()
    FTransform FirstListenerTransform;
    
    UPROPERTY()
    FTransform CurrentSpeakerTransform;
    
    UPROPERTY()
    FTransform CurrentListenerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SqueezeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlateCropSettings CropSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeightDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHeightDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequiredCharacterTagsSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequiredCharacterTagsListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequiredTagsSpeakerOrListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ForbiddenCharacterTagsSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ForbiddenCharacterTagsListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ForbiddenTagsSpeakerAndListener;
    
    UPROPERTY()
    bool bWasInverted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyUseAsDefaultWithSameTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CameraTransformBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FilmbackPresetName;
    
    UPROPERTY(EditAnywhere)
    bool bDoObstructionCheckSpeaker;
    
    UPROPERTY(EditAnywhere)
    bool bDoObstructionCheckListener;
    
    UPROPERTY(EditAnywhere)
    bool bDoObstructionCheckMiddle;
    
    UPROPERTY(EditAnywhere)
    bool bDoObstructionCheckFootHeightSpeaker;
    
    UPROPERTY(EditAnywhere)
    bool bDoObstructionCheckFootHeightListener;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CameraFoVCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CameraApertureCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CameraDoFOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CameraFocalLengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CameraFocusBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraFocusPointOffset;
    
public:
    UConversationCameraPresetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentActorTransforms(AActor* Speaker, AActor* Listener, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TryAddSmoothTransition(ACameraActor* Cam, AActor* Speaker, AActor* Listener);
    
protected:
    UFUNCTION(BlueprintPure)
    float SinRuleLine(const float OppositeAngle, const float OtherAngle, const float OtherLine) const;
    
    UFUNCTION(BlueprintPure)
    float SinRuleAngle(const float KnownAngle, const float OppositeLine, const float InputLine) const;
    
public:
    UFUNCTION()
    void SetStartTime(float NewStartTime);
    
protected:
    UFUNCTION()
    void SetSpeakerListenerTransform(FTransform& SpeakerOutTransform, FTransform& ListenerOutTransform) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInvertSide(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstTransforms(const FTransform& SpeakerTransform, const FTransform& ListenerTransform);
    
protected:
    UFUNCTION(BlueprintPure)
    float ReverseCosRuleAngle(const float Line1, const float Line2, const float OppositeLine) const;
    
public:
    UFUNCTION()
    bool IsValidInternal() const;
    
    UFUNCTION()
    bool IsConversationAbilityOfParticipantOfClass(AActor* Participant, TSubclassOf<UGameplayAbilityConversationV2> AbilityClass);
    
    UFUNCTION()
    bool IsCharacterInHeightThreshold() const;
    
    UFUNCTION()
    bool IsCharacterInDistanceThreshold(float PreferredDistance, const FVector& SpeakerLocation, const FVector& ListenerLocation, float DefaultPreferredCharacterDistance) const;
    
    UFUNCTION()
    bool HasLooped() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetOffsetFromAngle(float Angle, float Length) const;
    
public:
    UFUNCTION()
    TArray<FString> GetLightValueStrings() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetInterpolationTime() const;
    
public:
    UFUNCTION()
    float GetCurrentFoV() const;
    
    UFUNCTION()
    float GetCurrentFocusDistance(AActor* Speaker, AActor* Listener, const FVector& CamLocation) const;
    
    UFUNCTION()
    float GetCurrentFocalLength() const;
    
    UFUNCTION()
    float GetCurrentAperture() const;
    
    UFUNCTION()
    float GetCharacterHeightDifference() const;
    
    UFUNCTION()
    float GetCharacterDistance() const;
    
    UFUNCTION()
    TArray<FString> GetBaseValueStrings() const;
    
    UFUNCTION()
    FVector GetActorBoneLocation(AActor* BoneActor, const FString& BoneName) const;
    
protected:
    UFUNCTION(BlueprintPure)
    float CosRuleLine(const float Line1, const float Line2, const float Angle) const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void CopyValueStringToClipboard() const;
    
    UFUNCTION()
    void CopyLightStringToClipboard() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FLightSet CalculateLightSetValues(AGothicCharacter* Speaker, AGothicCharacter* Listener, AGothicCharacter* Initiator, AGothicCharacter* InitialListener, const TArray<AGothicCharacter*>& AdditionalParticipants, UConversationCameraLightingAdjuster* Adjuster);
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform CalculateCurrentTransform(AActor* Speaker, AActor* Listener) const;
    
protected:
    UFUNCTION()
    void AdjustAngleOffsetFromHeightDifference(FTransform& CurrentCameraTransform, const float HeightDifference, AActor* Speaker, AActor* Listener) const;
    
public:
    UFUNCTION()
    void AddVectorCurveValueStrings(const FRuntimeVectorCurve& Curve, const FString& CurveName, TArray<FString>& OutputArr) const;
    
    UFUNCTION()
    void AddRotatorCurveValueStrings(const FRuntimeVectorCurve& Curve, const FString& CurveName, TArray<FString>& OutputArr) const;
    
    UFUNCTION()
    void AddFloatCurveValueStrings(const FRuntimeFloatCurve& Curve, const FString& CurveName, TArray<FString>& OutputArr) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void AddCurveKeyFromTransform(const FTransform InputTransform, const float KeyTime, AActor* Speaker, AActor* Listener);
    
};

