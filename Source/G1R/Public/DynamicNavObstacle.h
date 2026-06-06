#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DynamicNavObstacle.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS()
class G1R_API ADynamicNavObstacle : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsEnabled)
    bool bIsEnabled;
    
    UPROPERTY(ReplicatedUsing=OnRep_ObstacleExtends)
    FVector ObstacleExtends;
    
    UPROPERTY(Instanced)
    USceneComponent* CachedReferenceComponent;
    
    UPROPERTY()
    float CachedReferenceExtentScale;
    
public:
    ADynamicNavObstacle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void SetNavObstacleEnabled(bool bShouldBeEnabled);
    
    UFUNCTION()
    void OnRep_ObstacleExtends();
    
    UFUNCTION()
    void OnRep_IsEnabled();
    
};

