#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ClockTime.h"
#include "EConversationCameraShotMode.h"
#include "ELightingModifierType.h"
#include "LightValues.h"
#include "SingleLightModifier.h"
#include "LightingModifier.generated.h"

class AActor;
class AConversationCameraV2;
class AGothicCharacter;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class G1R_API ULightingModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* AssociatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSingleLightModifier KeyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSingleLightModifier RimLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSingleLightModifier KeyReverseLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSingleLightModifier RimReverseLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSingleLightModifier AdditionalLight;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> SkyMaterialParameterCollectionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLightValues> AdditionalLightValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightingModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DiffuseColorBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeIntensityFinetuneFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TypePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GeneralPriority;
    
    UPROPERTY(EditAnywhere)
    FName SkyMaterialParameterCollectionParam_LightIntensity;
    
    UPROPERTY(EditAnywhere)
    FName SkyMaterialParameterCollectionParam_LightPosition;
    
    UPROPERTY(EditAnywhere)
    FName SkyMaterialParameterCollectionParam_LightDirection;
    
    ULightingModifier();

    UFUNCTION(BlueprintPure)
    bool ParticipantIsSpeaker(AActor* Participant) const;
    
    UFUNCTION(BlueprintPure)
    bool ParticipantIsListener(AActor* Participant) const;
    
    UFUNCTION(BlueprintPure)
    bool ParticipantIsInShadow(AGothicCharacter* Participant) const;
    
    UFUNCTION(BlueprintPure)
    bool IsParticipantInside(AGothicCharacter* Participant) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsApplicable(AGothicCharacter* Participant, const TArray<AGothicCharacter*>& AllParticipants) const;
    
    UFUNCTION()
    UMaterialParameterCollection* GetSkyMaterialParameter() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetParticipantSkinTone(AGothicCharacter* Participant) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetParticipantAmount() const;
    
    UFUNCTION(BlueprintPure)
    AConversationCameraV2* GetOuterCamera() const;
    
    UFUNCTION(BlueprintPure)
    float GetLightingScore(AActor* Participant) const;
    
    UFUNCTION(BlueprintPure)
    FString GetFirstConversationTopicName() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetExternalLightingColor(AGothicCharacter* Participant) const;
    
    UFUNCTION(BlueprintPure)
    float GetEnvironmentLightingScore(AGothicCharacter* Participant) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FClockTime GetDayTimeStart() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FClockTime GetDayTimeEnd() const;
    
    UFUNCTION(BlueprintPure)
    FClockTime GetCurrentSkyTime() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetColorDifferenceScore(const FLinearColor& ExternalLight, const FLinearColor& CompareLight) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCameraShotMode(EConversationCameraShotMode& OutShotMode) const;
    
};

