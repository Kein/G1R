#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpellCommonProjectile.h"
#include "GameplayAbilitySpellRepeatable.generated.h"

UCLASS()
class G1R_API UGameplayAbilitySpellRepeatable : public UGameplayAbilitySpellCommonProjectile {
    GENERATED_BODY()
public:
    UGameplayAbilitySpellRepeatable();

protected:
    UFUNCTION()
    void OnSyncActivateAbility();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSectionsLaunchSpellMontage() const;
    
};

