#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilitySmashMeatBug.generated.h"

class UAbilityTask_AlignCharacterAtLocation;
class UAbilityTask_PlayMontage_Extended;

UCLASS()
class G1R_API UGameplayAbilitySmashMeatBug : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_Distance;
    
    UPROPERTY(EditAnywhere)
    float m_DistanceToReposition;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    UAbilityTask_AlignCharacterAtLocation* m_AlignTask;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilitySmashMeatBug();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SmashMeatBug_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMeatBugSmashed(const FGameplayEventData Payload);
    
};

