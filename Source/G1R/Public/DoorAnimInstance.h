#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EInteractionSpotEntryDirection.h"
#include "DoorAnimInstance.generated.h"

class AActor;

UCLASS(NonTransient)
class G1R_API UDoorAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 m_State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 m_CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 m_ForceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    EInteractionSpotEntryDirection m_Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_ReceiveImpact;
    
private:
    UPROPERTY(Transient)
    AActor* OwningPawn;
    
public:
    UDoorAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetNavMeshCollision(bool newCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableDoorChange(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void CallDisableTick();
    
};

