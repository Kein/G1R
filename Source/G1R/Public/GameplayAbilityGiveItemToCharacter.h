#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityGiveItemToCharacter.generated.h"

class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityGiveItemToCharacter : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimMontage> GiveItemMontage;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ReceiveActionTag;
    
    UPROPERTY()
    bool bNotifyReached;
    
    UPROPERTY()
    bool bAllowedToTransferItem;
    
    UGameplayAbilityGiveItemToCharacter();

protected:
    UFUNCTION()
    void WaitForReceiverToFinish();
    
};

