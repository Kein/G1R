#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityReceiveItemFromCharacter.generated.h"

class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityReceiveItemFromCharacter : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimMontage> ReceiveItemMontage;
    
    UPROPERTY()
    UAnimMontage* PlayingMontageInstance;
    
    UGameplayAbilityReceiveItemFromCharacter();

};

