#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "AbilityTaskGeneric.h"
#include "TraversalInfo.h"
#include "AbilityTask_UpdateWallClimbing.generated.h"

class AClimbableWall;
class AGothicCharacter;
class UAbilityTask_UpdateWallClimbing;
class UCapsuleComponent;
class UGameplayAbility;
class UGameplayAbilityWallClimbing;
class UGothicAnimInstance;
class UGothicMovementComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateWallClimbing : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_Character;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UCapsuleComponent> m_CapsuleComponent;
    
    UPROPERTY()
    TWeakObjectPtr<UGothicAnimInstance> m_AnimInstance;
    
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_CharacterMovementComponent;
    
    UPROPERTY()
    float m_verticalPelvisOffset;
    
    UPROPERTY()
    TWeakObjectPtr<UGameplayAbilityWallClimbing> m_wallClimbingGA;
    
    UPROPERTY()
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY()
    AClimbableWall* m_ClimbableWall;
    
private:
    UPROPERTY()
    FTimerHandle m_timerHandle;
    
public:
    UAbilityTask_UpdateWallClimbing();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateWallClimbing* CreateUpdateWallClimbing(UGameplayAbility* OwningAbility, FName TaskInstanceName, AClimbableWall* ClimbableWall, FTraversalInfo& TraversalInfo, float PlayRate, FVector StartOffset, bool CalculateEdgeHeightFromFeetLocation);
    
    UFUNCTION()
    void CheckWallLimits();
    
};

