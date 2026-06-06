#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "Engine/EngineTypes.h"
#include "EConversationCameraRelativeParticipant.h"
#include "LightValues.h"
#include "OffsetTestingCamera.generated.h"

class AActor;
class ARectLight;
class UConversationCameraPresetBase;

UCLASS()
class G1R_API AOffsetTestingCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector LastSpeakerPosition;
    
    UPROPERTY()
    FVector LastListenerPosition;
    
    UPROPERTY(EditAnywhere, Instanced)
    UConversationCameraPresetBase* TestingPreset;
    
    UPROPERTY(EditAnywhere)
    AActor* Speaker;
    
    UPROPERTY(EditAnywhere)
    AActor* Listener;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> Target;
    
    UPROPERTY(EditAnywhere)
    float InsertTime;
    
    UPROPERTY(EditAnywhere)
    ARectLight* KeyLight;
    
    UPROPERTY(EditAnywhere)
    ARectLight* RimLight;
    
    UPROPERTY(EditAnywhere)
    ARectLight* KeyReverseLight;
    
    UPROPERTY(EditAnywhere)
    ARectLight* RimReverseLight;
    
    UPROPERTY(EditAnywhere)
    TArray<ARectLight*> AdditionalLights;
    
    UPROPERTY(EditAnywhere)
    AActor* AdditionalActor;
    
    UPROPERTY(EditAnywhere)
    EConversationCameraRelativeParticipant AdditionalLightIsRelativeTo;
    
    UPROPERTY(EditAnywhere)
    FLightingChannels SpeakerLightingChannels;
    
    UPROPERTY(EditAnywhere)
    FLightingChannels ListenerLightingChannels;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(EditAnywhere)
    float BarnDoorAngle;
    
    UPROPERTY(EditAnywhere)
    float BarnDoorLength;
    
    UPROPERTY(EditAnywhere)
    float VolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere)
    float IndirectLightIntensity;
    
    UPROPERTY(EditAnywhere)
    ELightUnits LightUnits;
    
protected:
    UPROPERTY()
    float LightSpawnDistance;
    
    UPROPERTY()
    float LightSpawnHeight;
    
    UPROPERTY()
    float LightSpawnIntensity;
    
    UPROPERTY()
    ELightUnits LightSpawnUnits;
    
public:
    AOffsetTestingCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WriteOffsetToPreset();
    
protected:
    UFUNCTION()
    void WriteLightValueFromActor(FLightValues& LightValues, ARectLight* LightActor, AActor* ReferenceActor, AActor* OtherActor, const EConversationCameraRelativeParticipant RelativeTo) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateLightPosition();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLights();
    
    UFUNCTION(BlueprintCallable)
    void ResetKeyValues();
    
    UFUNCTION(BlueprintCallable)
    void PresetClassToClipboard();
    
    UFUNCTION(BlueprintCallable)
    void LightValuesToClipboard();
    
    UFUNCTION(BlueprintCallable)
    void LightsFaceActor();
    
protected:
    UFUNCTION()
    FTransform GetTransformRelativeToActor(AActor* ReferencePoint, AActor* OtherPoint, AActor* RelativeActor) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FaceTargetActor();
    
    UFUNCTION(BlueprintCallable)
    void FaceFocusPoint();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDefaultLightParams(ARectLight* Light, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void AdditionalLightValuesToClipboard();
    
};

