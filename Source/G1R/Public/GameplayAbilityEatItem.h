#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityEatItem.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UItemEffectDefinition;

UCLASS()
class G1R_API UGameplayAbilityEatItem : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_MontageTask;
    
    UPROPERTY()
    TArray<UItemEffectDefinition*> m_OnConsumeEffects;
    
public:
    UGameplayAbilityEatItem();

private:
    UFUNCTION()
    void OnAnimFinished();
    
};

