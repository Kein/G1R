#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_StateBasedInputAction.generated.h"

class AActor;

UCLASS()
class G1R_API UAbilityTask_StateBasedInputAction : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag InputEventTag;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag InputDirectionTag;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* Target;
    
    UAbilityTask_StateBasedInputAction();

};

