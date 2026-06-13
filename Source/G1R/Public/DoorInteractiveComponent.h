#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "EDoorModel.h"
#include "DoorInteractiveComponent.generated.h"

class AActor;
class AInteractiveObjectActor;
class UBoxNavShapeComponent;
class UDoorInteractiveExtraData;
class UInteractiveComponent;
class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UDoorInteractiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UStaticMeshComponent* m_CollisionComp;
    
    UPROPERTY(Instanced)
    UBoxNavShapeComponent* m_NavMeshBlockComponent;
    
    UPROPERTY(Instanced)
    UInteractiveComponent* m_InteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly)
    AInteractiveObjectActor* m_InteractiveActor;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<FName, int32> m_LocalPuzzlePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDoorModel m_Model;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FGameplayMessageListenerHandle> m_Listeners;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, int32> m_UserIdStep;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_InternalDoorName;
    
public:
    UPROPERTY()
    UDoorInteractiveExtraData* m_DoorExtraData;
    
    UDoorInteractiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void SetPLayerCollision(bool Enable, AActor* moveIgnoreActor) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentStep() const;
    
};

