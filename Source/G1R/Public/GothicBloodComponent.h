#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "GothicActorComponentInterface.h"
#include "InGameTime.h"
#include "VisualHitData.h"
#include "GothicBloodComponent.generated.h"

class IDisposable;
class UDisposable;
class UDecalComponent;
class UGothicMaterialsComponent;
class UGothicWeatherComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class UVectorMaterialPropertyProvider;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicBloodComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(Instanced)
    UGothicMaterialsComponent* MaterialsComponent;
    
    UPROPERTY(Instanced)
    UGothicWeatherComponent* WeatherComponent;
    
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_WeaponBloodTrailParticles;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_BodyBloodTrailParticles;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_MutilationBloodNiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_DecompositionFliesSystem;
    
    UPROPERTY(EditAnywhere)
    float HitBloodAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CustomHitWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomRadius;
    
    UPROPERTY(EditAnywhere)
    float BloodFadeTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    float BloodInWaterFadeInSeconds;
    
    UPROPERTY(EditAnywhere)
    float BloodParticlesTime;
    
    UPROPERTY(EditAnywhere)
    float FliesStartMinFactor;
    
    UPROPERTY(EditAnywhere)
    FInGameTime TotalDecompositionTime;
    
    UPROPERTY(EditAnywhere)
    int32 MaxFlies;
    
protected:
    UPROPERTY()
    FTimerHandle m_DecompositionTimerHandle;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_DeathDecalMaterial;
    
    UPROPERTY(EditAnywhere)
    float DeathDecalSize;
    
    UPROPERTY(EditAnywhere)
    float DeathDecalDurationInSeconds;
    
    UPROPERTY(EditAnywhere)
    FInGameTime DeathDecalFreshDuration;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_DecalMID;
    
    UPROPERTY(Instanced)
    UDecalComponent* m_DeathDecal;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVisualHitData> m_BloodHitData;
    
    UPROPERTY(BlueprintReadWrite)
    UVectorMaterialPropertyProvider* m_BloodHitVector;
    
    UPROPERTY(BlueprintReadWrite)
    TScriptInterface<IDisposable> BloodEffect;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_HasBlood;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_CanDecompose;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor m_BloodColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* WaterBloodSystem;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* WaterNiagaraComponent;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* FliesNiagaraComponent;
    
public:
    UGothicBloodComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartBloodPoolOnDeathAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBloodPoolOnDeath(bool IsJustSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalBloodHeight(float Height, FLinearColor BloodColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDecomposition(FInGameTime DecompositionStart);
    
    UFUNCTION(BlueprintCallable)
    void SetBloodColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHit(const FVector& hitWorldLocation, float Radius, float normalizedRelativeDamage);
    
    UFUNCTION()
    void RegisterCustomHit();
    
    UFUNCTION(BlueprintCallable)
    void ReduceVerticalBloodHeight(float Height);
    
    UFUNCTION()
    void OnResurrect();
    
    UFUNCTION()
    void OnDeadStateChanged(const FGameplayTag Tag, int32 NewCount);
    
protected:
    UFUNCTION()
    void InitializeBloodHit(FVisualHitData& BloodHitData, const FVector& HitLocation, const float HitRadius, const int32 Index) const;
    
public:
    UFUNCTION()
    void HandleDecomposition(bool IsJustSpawned, FInGameTime DecompositionStart);
    
    UFUNCTION()
    void HandleDeathState(bool IsJustSpawned);
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetBloodDecal() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetBloodColor() const;
    
    UFUNCTION()
    void DisableWaterParticles();
    
    UFUNCTION(BlueprintCallable)
    void ClearBlood();
    

    // Fix for true pure virtual functions not being implemented
};

