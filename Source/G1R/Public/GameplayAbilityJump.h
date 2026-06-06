#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityJump.generated.h"

class AGothicCharacter;
class UDataModule_Locomotion;

UCLASS()
class G1R_API UGameplayAbilityJump : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Locomotion> m_LocomotionModule;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_Character;
    
public:
    UGameplayAbilityJump();

};

