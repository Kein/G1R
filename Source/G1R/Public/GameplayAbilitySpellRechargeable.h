#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpellCommonProjectile.h"
#include "GameplayAbilitySpellRechargeable.generated.h"

UCLASS()
class G1R_API UGameplayAbilitySpellRechargeable : public UGameplayAbilitySpellCommonProjectile {
    GENERATED_BODY()
public:
    UGameplayAbilitySpellRechargeable();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateSpellServer_Scriptable(float DeltaTime);
    
};

