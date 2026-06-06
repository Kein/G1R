#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SwampsharkSlimeComponent.generated.h"

class UCurveFloat;
class USkeletalMeshComponent;
class USlimeAsset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API USwampsharkSlimeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, USlimeAsset*> m_SlimeAssets;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_SlimeEffectCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_SlimeFadeOutCurve;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeAgressive;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeAttack;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeDeath;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeHit;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeLower;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeRaised;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* SlimeStunned;
    
    USwampsharkSlimeComponent(const FObjectInitializer& ObjectInitializer);

};

