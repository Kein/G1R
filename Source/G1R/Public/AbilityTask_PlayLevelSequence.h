#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTask_PlayLevelSequence.generated.h"

class ALevelSequenceActor;
class UAbilityTask_PlayLevelSequence;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_PlayLevelSequence : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LevelSequenceName;
    
    UPROPERTY()
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    UAbilityTask_PlayLevelSequence();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlayLevelSequence* TaskPlayLevelSequenceByName(UGameplayAbility* OwningAbility, FName NewLevelSequenceName);
    
};

