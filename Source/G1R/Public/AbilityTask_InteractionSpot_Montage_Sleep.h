#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_InteractionSpot_Montage.h"
#include "AbilityTask_InteractionSpot_Montage_Sleep.generated.h"

UCLASS()
class G1R_API UAbilityTask_InteractionSpot_Montage_Sleep : public UAbilityTask_InteractionSpot_Montage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntrySleepLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageEntrySleepRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageLoopSleepLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageLoopSleepRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageExitSleepLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageExitSleepRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MontageLoopSit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MontageTransitionTagSleepEntryLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MontageTransitionTagSleepEntryRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MontageTransitionTagSleepExitLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MontageTransitionTagSleepExitRight;
    
    UAbilityTask_InteractionSpot_Montage_Sleep();

};

