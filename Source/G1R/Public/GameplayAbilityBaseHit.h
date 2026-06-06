#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityBaseHit.generated.h"

class UFeedbackData;

UCLASS()
class G1R_API UGameplayAbilityBaseHit : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UFeedbackData> m_DefaultFeedback;
    
public:
    UGameplayAbilityBaseHit();

protected:
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnPressDodge();
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

