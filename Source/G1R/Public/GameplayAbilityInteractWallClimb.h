#pragma once
#include "CoreMinimal.h"
#include "EGenericTaskResult.h"
#include "GameplayAbilityBase.h"
#include "TraversalInfo.h"
#include "GameplayAbilityInteractWallClimb.generated.h"

class AClimbableWall;
class AGothicCharacter;
class UAbilityTaskGeneric;
class UAbilityTask_AlignCharacterAtLocation;
class UAbilityTask_MoveIntoPositionForInteraction;

UCLASS()
class G1R_API UGameplayAbilityInteractWallClimb : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_MoveIntoPositionForInteraction* m_TaskMoveTo;
    
    UPROPERTY()
    UAbilityTask_AlignCharacterAtLocation* m_TaskAlign;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY()
    AClimbableWall* m_interactiveWallActor;
    
    UPROPERTY()
    float m_maxTime;
    
public:
    UGameplayAbilityInteractWallClimb();

protected:
    UFUNCTION()
    void StartClimbing();
    
    UFUNCTION()
    void OnWeaponUnequipped();
    
    UFUNCTION()
    void OnPositionReached(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void OnClimb(const FTraversalInfo& climbingInfo);
    
};

