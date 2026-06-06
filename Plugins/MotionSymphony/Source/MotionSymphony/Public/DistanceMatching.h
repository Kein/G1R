#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DistanceMatchPayload.h"
#include "EDistanceMatchTrigger.h"
#include "DistanceMatching.generated.h"

class AActor;
class UCharacterMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONSYMPHONY_API UDistanceMatching : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutomaticTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlantDetectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlantSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlantAccel;
    
protected:
    UPROPERTY(Transient)
    AActor* ParentActor;
    
    UPROPERTY(Instanced, Transient)
    UCharacterMovementComponent* MovementComponent;
    
public:
    UDistanceMatching(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerTurnInPlaceTo(FVector DesiredDirection);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTurnInPlaceFrom();
    
    UFUNCTION(BlueprintCallable)
    void TriggerStop(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TriggerStart(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPlant(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPivotTo();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPivotFrom();
    
    UFUNCTION(BlueprintCallable)
    void TriggerJump(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopDistanceMatching();
    
    UFUNCTION(BlueprintCallable)
    float GetMarkerDistance();
    
    UFUNCTION(BlueprintCallable)
    FDistanceMatchPayload GetDistanceMatchPayload();
    
    UFUNCTION(BlueprintCallable)
    EDistanceMatchTrigger GetAndConsumeTriggeredTransition();
    
    UFUNCTION(BlueprintCallable)
    void DetectTransitions(float DeltaTime);
    
};

