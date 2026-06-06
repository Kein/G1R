#pragma once
#include "CoreMinimal.h"
#include "AngelscriptAbilityTask.h"
#include "AbilityTaskBase.generated.h"

class UAbilityTaskBase;
class UGameplayAbility;
class UObject;

UCLASS()
class G1R_API UAbilityTaskBase : public UAngelscriptAbilityTask {
    GENERATED_BODY()
public:
    //FIXME
    //UAbilityTaskBase();

    UFUNCTION()
    void MakeChildOf(UAbilityTaskBase* OtherTask);
    
    UFUNCTION()
    bool IsDuplicateOf(const UAbilityTaskBase* Other) const;
    
    UFUNCTION()
    UAbilityTaskBase* DuplicateTask(UGameplayAbility* ToAbility, UObject* Outer);
    
    UFUNCTION()
    bool BP_IsPaused() const;
    
    UFUNCTION()
    bool BP_IsFinished() const;
    
    UFUNCTION()
    bool BP_IsActive() const;
    
};

