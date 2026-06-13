#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GothicAnimInstance.h"
#include "BipedRidingAnimInstance.generated.h"

class AGothicCharacter;
class APlayerState;
class UDataModule_Locomotion;

UCLASS(NonTransient)
class G1R_API UBipedRidingAnimInstance : public UGothicAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_mountCharacter;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_MountLocomotion;
    
    UPROPERTY()
    TWeakObjectPtr<UGothicAnimInstance> m_MountAnimInstance;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RiderVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RiderAcceleration;
    
public:
    UBipedRidingAnimInstance();

protected:
    UFUNCTION()
    void UpdateRideableMotion_ThreadSafe(float DeltaTime);
    
    UFUNCTION()
    void OnRidingStart(AGothicCharacter* mountCharacter);
    
    UFUNCTION()
    void OnRidingEnd();
    
    UFUNCTION()
    void OnPlayerStateSet(APlayerState* newPlayerState, APlayerState* oldPlayerState);
    
public:
    UFUNCTION(BlueprintPure)
    UDataModule_Locomotion* GetMountDataModuleLocomotion() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetMountCharacter() const;
    
};

