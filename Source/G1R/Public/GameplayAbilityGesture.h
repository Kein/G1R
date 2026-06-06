#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "GestureSetEntry.h"
#include "GameplayAbilityGesture.generated.h"

class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityGesture : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UAnimMontage* ActiveIdleMontage;
    
    UPROPERTY(Transient)
    UAnimMontage* ActiveGestureMontage;
    
    UPROPERTY(EditAnywhere)
    float IdleBlendInSeconds;
    
    UPROPERTY(EditAnywhere)
    float IdleBlendOutSeconds;
    
    UPROPERTY(EditAnywhere)
    float GestureBlendInSeconds;
    
    UPROPERTY(EditAnywhere)
    float GestureBlendOutSeconds;
    
    UPROPERTY(EditAnywhere)
    bool bMatchTargetDurationViaPlayRate;
    
    UPROPERTY(EditAnywhere)
    float MatchTargetDurationMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float MatchTargetDurationMinSpeed;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer StayActiveAndPlayIdleForOwnedTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FGestureSetEntry> GestureSets;
    
public:
    UGameplayAbilityGesture();

};

