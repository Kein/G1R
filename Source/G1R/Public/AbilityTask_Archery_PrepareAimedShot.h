#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_Archery_PrepareAimedShot.generated.h"

class UAbilityTask_Archery_PrepareAimedShot;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Archery_PrepareAimedShot : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StringTensionRatio;
    
    UAbilityTask_Archery_PrepareAimedShot();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Archery_PrepareAimedShot* TaskArcheryPrepareAimedShot(UGameplayAbility* OwningAbility, float NewStringTensionRatio);
    
};

