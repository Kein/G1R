#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "VisualHitData.h"
#include "GothicDirtComponent.generated.h"

class IDisposable;
class UDisposable;
class UGothicBloodComponent;
class UGothicMaterialsComponent;
class UGothicWeatherComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class UVectorMaterialPropertyProvider;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicDirtComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* m_SkeletalMesh;
    
    UPROPERTY(Instanced)
    UGothicMaterialsComponent* m_MaterialsComponent;
    
    UPROPERTY(Instanced)
    UGothicBloodComponent* m_BloodComponent;
    
    UPROPERTY(Instanced)
    UGothicWeatherComponent* m_WeatherComponent;
    
public:
    UPROPERTY(EditAnywhere)
    bool m_AllowDebug;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentDirt;
    
    UPROPERTY(EditAnywhere)
    float m_DirtParticlesTime;
    
    UPROPERTY(EditAnywhere)
    float m_DirtFadeTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    float m_DirtInWaterFadeInSeconds;
    
protected:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVisualHitData> m_DirtHitData;
    
    UPROPERTY(BlueprintReadWrite)
    UVectorMaterialPropertyProvider* m_DirtSeedScalar;
    
    UPROPERTY(BlueprintReadWrite)
    TScriptInterface<IDisposable> m_DirtEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* m_WaterDirtSystem;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_WaterNiagaraComponent;
    
public:
    UGothicDirtComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDirt(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void RandomizePoints(bool Initialize);
    
protected:
    UFUNCTION()
    void InitializeDirtHit(FVisualHitData& DirtHitData, const FVector& HitLocation, const float HitRadius, const int32 Index) const;
    
public:
    UFUNCTION()
    void DisableWaterParticles();
    

    // Fix for true pure virtual functions not being implemented
};

