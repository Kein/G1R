#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityOpen.h"
#include "GameplayAbilityOpenContainer.generated.h"

class UAbilityTask_LootWorldContainer;
class UHUDOpenContainerController;

UCLASS(Abstract)
class G1R_API UGameplayAbilityOpenContainer : public UGameplayAbilityOpen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_LootWorldContainer* m_TaskLootContainer;
    
    UPROPERTY()
    UHUDOpenContainerController* HUDOpenContainerController;
    
public:
    UGameplayAbilityOpenContainer();

protected:
    UFUNCTION()
    void OnLocalCloseRequested();
    
};

