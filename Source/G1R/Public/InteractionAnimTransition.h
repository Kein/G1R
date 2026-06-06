#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInteractionInputKind.h"
#include "InteractionAnimTransitionActivatedDelegate.h"
#include "InteractionAnimTransitionConditionDelegate.h"
#include "InteractionAnimTransition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FInteractionAnimTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FromSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> FromMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ToSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> ToMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSeamless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReturnToMainLoopAfterEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoTransitionForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownAfterAnyTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockOtherTransitionsForSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequireCharacterHasAnyOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequireCharacterHasNoneOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionAnimTransitionActivated OnTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInteractionAnimTransitionCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractionInputKind TransitionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutDurationMultiplier;
    
    G1R_API FInteractionAnimTransition();
};

