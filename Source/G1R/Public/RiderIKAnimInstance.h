#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BipedIKAnimInstance.h"
#include "RiderIKAnimInstance.generated.h"

class AGothicCharacter;
class APlayerState;
class UGameplayAbility;

UCLASS(NonTransient)
class G1R_API URiderIKAnimInstance : public UBipedIKAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_mountCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_LeftFootPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_RightFootPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_HandsPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_LeftFootSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_RightFootSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_HandsSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIK_Left;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIK_Right;
    
    UPROPERTY(BlueprintReadOnly)
    float m_EnableHandsIK;
    
public:
    URiderIKAnimInstance();

protected:
    UFUNCTION()
    void OnRidingStart(AGothicCharacter* mountCharacter);
    
    UFUNCTION()
    void OnPlayerStateSet(APlayerState* newPlayerState, APlayerState* oldPlayerState);
    
    UFUNCTION()
    void OnAbilityActivated(UGameplayAbility* GameplayAbility);
    
};

