#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityEnsureWeaponUnequipped.generated.h"

UCLASS()
class G1R_API UGameplayAbilityEnsureWeaponUnequipped : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_TagToCheck;
    
    UGameplayAbilityEnsureWeaponUnequipped();

};

