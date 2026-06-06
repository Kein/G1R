#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "EInventoryTypes.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_SwapWeaponFromInventoryToAnother.generated.h"

class UAbilityTask_SwapWeaponFromInventoryToAnother;
class UCarryComponent;
class UDataModule_Container;
class UGameplayAbility;
class UInventoryComponent;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_SwapWeaponFromInventoryToAnother : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY()
    EInventoryTypes InventoryType;
    
    UPROPERTY()
    int32 SlotId;
    
protected:
    UPROPERTY()
    TSubclassOf<UItemDefinition> ExpectedItemDefinition;
    
    UPROPERTY(Instanced)
    UCarryComponent* CarryComponent;
    
    UPROPERTY()
    UDataModule_Container* DataModule_Container;
    
    UPROPERTY(Instanced)
    UInventoryComponent* InventoryComponent;
    
public:
    UAbilityTask_SwapWeaponFromInventoryToAnother();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_SwapWeaponFromInventoryToAnother* TaskEquipItem(UGameplayAbility* OwningAbility, FGameplayTag ItemType);
    
};

