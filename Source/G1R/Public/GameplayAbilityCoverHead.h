#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityCoverHead.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS(Abstract)
class G1R_API UGameplayAbilityCoverHead : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UAnimMontage>> CoverHeadAnimations;
    
    UPROPERTY()
    TSoftObjectPtr<UAnimMontage> SelectedCoverHeadAnimation;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* CoverHeadAnimationTask;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RequiredRainLevel;
    
    UPROPERTY(EditAnywhere)
    float QueryTickIntervall;
    
public:
    UGameplayAbilityCoverHead();

};

