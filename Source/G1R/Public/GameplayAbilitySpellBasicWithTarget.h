#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpellBasic.h"
#include "GameplayAbilitySpellBasicWithTarget.generated.h"

class AActor;

UCLASS()
class G1R_API UGameplayAbilitySpellBasicWithTarget : public UGameplayAbilitySpellBasic {
    GENERATED_BODY()
public:
    UGameplayAbilitySpellBasicWithTarget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNewTarget_Scriptable(AActor* NewTarget);
    
};

