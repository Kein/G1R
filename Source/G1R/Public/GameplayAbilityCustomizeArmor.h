#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityCustomizeArmor.generated.h"

class AGothicCharacter;

UCLASS()
class G1R_API UGameplayAbilityCustomizeArmor : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* CustomizationShopOwner;
    
public:
    UGameplayAbilityCustomizeArmor();

};

