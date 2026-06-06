#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "InGameTime.h"
#include "LoveStoryCollider.generated.h"

class UBoxComponent;
class UMeshComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;

UCLASS()
class G1R_API ALoveStoryCollider : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsAreaVisited;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* m_DecompositionFliesSystem;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* FliesNiagaraComponent;
    
    UPROPERTY(EditAnywhere)
    int32 MaxFlies;
    
    UPROPERTY(EditAnywhere)
    float FliesStartMinFactor;
    
    UPROPERTY(EditAnywhere)
    FInGameTime TotalDecompositionTime;
    
public:
    ALoveStoryCollider(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UMeshComponent*> GetLovers();
    
};

