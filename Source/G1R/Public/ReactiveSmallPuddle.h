#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "ReactiveSmallPuddle.generated.h"

class UBoxComponent;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS()
class G1R_API AReactiveSmallPuddle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* m_StaticMeshComponent;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_MaterialInstanceDynamic;
    
    UPROPERTY()
    AActor* m_ActorInside;
    
    UPROPERTY()
    FVector m_LastActorPosition;
    
    UPROPERTY(EditAnywhere)
    float m_MaxIntensity;
    
    UPROPERTY(EditAnywhere)
    float m_DecayFactor;
    
public:
    AReactiveSmallPuddle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ActorExited(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ActorEntered(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

