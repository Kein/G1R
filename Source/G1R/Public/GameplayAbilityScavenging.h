#pragma once
#include "CoreMinimal.h"
#include "EGenericTaskResult.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityScavenging.generated.h"

class AClimbableWall;
class AGothicCharacter;
class UAbilityTaskGeneric;
class UAbilityTask_AlignCharacterAtLocation;

UCLASS()
class G1R_API UGameplayAbilityScavenging : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AClimbableWall* m_interactiveWallActor;
    
    UPROPERTY()
    AGothicCharacter* m_CorpseToEat;
    
    UPROPERTY()
    UAbilityTask_AlignCharacterAtLocation* m_AlignCharacterToCorpseTask;
    
public:
    UGameplayAbilityScavenging();

private:
    UFUNCTION()
    void OnAlignCharacterToCorpseCompleted(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
};

