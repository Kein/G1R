#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "NiagaraDataInterfaceExport.h"
#include "GothicBloodFallingDrops.generated.h"

class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class G1R_API AGothicBloodFallingDrops : public AActor, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UNiagaraComponent* m_BloodParticleComponent;
    
    UPROPERTY(VisibleAnywhere)
    UNiagaraSystem* m_BloodParticles;
    
    UPROPERTY()
    TArray<FVector> m_BloodDrops;
    
    UPROPERTY()
    UMaterialInterface* m_DecalMaterial;
    
    UPROPERTY()
    FVector m_PreviousLocation;
    
public:
    AGothicBloodFallingDrops(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartParticles(float creatureScale, FLinearColor BloodColor, float bloodAmount, UStaticMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBloodParticles(UNiagaraSystem* bloodParticles);
    
    UFUNCTION()
    void ProcessBloodDrops();
    
    UFUNCTION()
    void DestroyActor();
    
    UFUNCTION(BlueprintCallable)
    void AttachParticlesToMesh(USkeletalMeshComponent* MeshComponent, const FName& SocketName);
    

    // Fix for true pure virtual functions not being implemented
};

