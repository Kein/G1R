#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "GothicFXInstanceHandle.h"
#include "GothicFXComponent.generated.h"

class AActor;
class UDamageType;
class UFMODEvent;
class UPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicFXComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInstigatedAnyDamageSignature, float, Damage, const UDamageType*, DamageType, AActor*, DamagedActor, AActor*, DamageCauser);
    
    UGothicFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopFXInstancesWithTag(FGameplayTag EffectTag, bool IgnoreSpecs);
    
    UFUNCTION(BlueprintCallable)
    void StopFXInstance(FGothicFXInstanceHandle FXHandle, bool IgnoreSpecs);
    
    UFUNCTION(BlueprintCallable)
    void StopAllFXInstances(bool bIgnoreSpecs);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelinePosition(FGothicFXInstanceHandle FXHandle, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(FGothicFXInstanceHandle FXHandle, bool Paused);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialOverride(FGameplayTag Tag, UPhysicalMaterial* Material);
    
    UFUNCTION(BlueprintCallable)
    FGothicFXInstanceHandle PlayEffectWithHitResult(const FGameplayTag& EffectTag, const FHitResult& HitResult, TSoftObjectPtr<UFMODEvent> SoundOverride);
    
    UFUNCTION(BlueprintCallable)
    FGothicFXInstanceHandle PlayEffect(const FGameplayTag& EffectTag, TSoftObjectPtr<UFMODEvent> SoundOverride);
    
    UFUNCTION()
    void PlayCollisionEffect(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void MoveFXInstance(FGothicFXInstanceHandle FXHandle, const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying(FGothicFXInstanceHandle FXHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsHandleValid(FGothicFXInstanceHandle FXHandle);
    
    UFUNCTION()
    void HandleOnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTimelinePosition(FGothicFXInstanceHandle FXHandle);
    
protected:
    UFUNCTION()
    void DiscardInactiveSoundAreas();
    
    UFUNCTION()
    void DiscardInactiveInstantEffectSounds();
    
};

