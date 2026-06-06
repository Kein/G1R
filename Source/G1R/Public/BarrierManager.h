#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "BarrierManager.generated.h"

class AGothicCharacter;
class APostProcessVolume;
class IActivableActor;
class UActivableActor;
class IAreaContainerDetector;
class UAreaContainerDetector;
class UBarrierCharacterHandler;
class UGameplayEffect;
class UMaterialInterface;
class UNiagaraSystem;

UCLASS(NotPlaceable)
class ABarrierManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float BarrierLocalRadius;
    
    UPROPERTY(EditAnywhere)
    float m_SafeZoneDistance;
    
    UPROPERTY(EditAnywhere)
    float m_WarningZoneDistance;
    
    UPROPERTY(EditAnywhere)
    float m_RedZoneDistance;
    
    UPROPERTY(EditAnywhere)
    AActor* m_Barrier;
    
    UPROPERTY(EditAnywhere)
    AActor* m_BarrierCollider;
    
    UPROPERTY(EditAnywhere)
    AActor* CloseDistanceBarrier;
    
    UPROPERTY(EditAnywhere)
    APostProcessVolume* m_PostProcess;
    
    UPROPERTY()
    TScriptInterface<IActivableActor> CloseDistanceBarrierActivableActor;
    
    UPROPERTY()
    TArray<TScriptInterface<IAreaContainerDetector>> CustomSafeZones;
    
    UPROPERTY(EditAnywhere)
    float m_BarrierRayRandomFactor;
    
    UPROPERTY(EditAnywhere)
    float m_GroundRayRandomFactor;
    
    UPROPERTY(EditAnywhere)
    float m_MaxHeight;
    
    UPROPERTY(EditAnywhere)
    uint8 m_GroundRaysAmount;
    
    UPROPERTY(EditAnywhere)
    uint8 m_BarrierRaysAmount;
    
    UPROPERTY(EditAnywhere)
    float m_NewRayBarrierDist;
    
    UPROPERTY(EditAnywhere)
    float m_NewRayGroundDist;
    
    UPROPERTY(EditAnywhere)
    float m_MinBarrierRayDistance;
    
    UPROPERTY(EditAnywhere)
    FLinearColor m_LightColor;
    
    UPROPERTY(EditAnywhere)
    float m_LightIntensity;
    
    UPROPERTY(EditAnywhere)
    float m_LightVolumetricScattering;
    
    UPROPERTY(EditAnywhere)
    float m_PostProcessFactor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_LightFunctionMaterial;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> m_OrangeZoneEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> m_RedZoneEffect;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_BarrierRayParticleSystem;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_FeetRayParticleSystem;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_GroundRaysSourceBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_RedRaysSourceBones;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, UBarrierCharacterHandler*> CharacterHandlers;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_FX_BarrierWarning;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_FX_BarrierOrange;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_FX_BarrierOrange_NPC;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_FX_BarrierRed;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_FX_BarrierRed_NPC;
    
public:
    ABarrierManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetActiveState(bool State) const;
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle CreateSpecFromGameplayEffect(const UGameplayEffect* GameplayEffect, const AGothicCharacter* Character);
    
};

