#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityAim.generated.h"

class UGothicAbilitySystemComponent;
class UHUDQuickSlotController;

UCLASS()
class G1R_API UGameplayAbilityAim : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY()
    TSoftObjectPtr<UHUDQuickSlotController> m_QuickSlotController;
    
public:
    UGameplayAbilityAim();

};

