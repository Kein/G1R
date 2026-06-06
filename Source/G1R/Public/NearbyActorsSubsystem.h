#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "TrackedActorSet.h"
#include "NearbyActorsSubsystem.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType, Config=Game)
class G1R_API UNearbyActorsSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TArray<TSubclassOf<AActor>> DefaultTrackedActorClasses;
    
    UPROPERTY(Config)
    TArray<TSubclassOf<USceneComponent>> DefaultTrackedComponentClasses;
    
    UPROPERTY()
    TSet<AActor*> ActorsWaitingToBeTracked;
    
    UPROPERTY(Export)
    TSet<USceneComponent*> ComponentsWaitingToBeTracked;
    
    UPROPERTY()
    TSet<TSubclassOf<AActor>> TrackedActorClasses;
    
    UPROPERTY()
    TSet<TSubclassOf<USceneComponent>> TrackedComponentClasses;
    
    UPROPERTY()
    FTrackedActorSet TrackedActors;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<USceneComponent>> PotentiallyDestroyedComponents;
    
public:
    UNearbyActorsSubsystem();

    UFUNCTION(BlueprintCallable)
    void TrackDynamicallyCreatedComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void TrackComponentsOfClass(TSubclassOf<USceneComponent> Class);
    
    UFUNCTION(BlueprintCallable)
    void TrackActorsOfClass(TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    void StopTrackingDynamicallyCreatedComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void StopTrackingComponentsOfClass(TSubclassOf<USceneComponent> Class);
    
    UFUNCTION(BlueprintCallable)
    void StopTrackingActorsOfClass(TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    bool IsTrackingComponentClass(TSubclassOf<USceneComponent> Class);
    
    UFUNCTION(BlueprintCallable)
    bool IsTrackingActorClass(TSubclassOf<AActor> Class);
    
protected:
    UFUNCTION()
    void HandleActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<USceneComponent*> FindComponentsOfClassInRadius(TSubclassOf<USceneComponent> Class, const FVector& Center, float Radius) const;
    
    UFUNCTION(BlueprintPure)
    TArray<USceneComponent*> FindComponentsOfClassInBox(TSubclassOf<USceneComponent> Class, const FBox& Box) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> FindActorsOfClassInRadius2D(TSubclassOf<AActor> Class, const FVector& Center, float Radius) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> FindActorsOfClassInRadius(TSubclassOf<AActor> Class, const FVector& Center, float Radius) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> FindActorsOfClassInBox(TSubclassOf<AActor> Class, const FBox& Box) const;
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UNearbyActorsSubsystem, STATGROUP_Tickables); }
};

