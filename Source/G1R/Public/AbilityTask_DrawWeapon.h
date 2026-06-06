#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "EInventoryTypes.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_DrawWeapon.generated.h"

class UAbilityTask_DrawWeapon;
class UCarryComponent;
class UGameplayAbility;
class UItemDefinition;
class USpellContainer;

UCLASS()
class G1R_API UAbilityTask_DrawWeapon : public UAbilityTask_StateBasedAction {
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
    
public:
    UAbilityTask_DrawWeapon();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DrawWeapon* TaskDrawWeapon(UGameplayAbility* OwningAbility, EInventoryTypes Type);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DrawWeapon* TaskDrawTorch(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DrawWeapon* TaskDrawRangedWeapon(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DrawWeapon* TaskDrawMeleeWeapon(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DrawWeapon* TaskDrawMagic(UGameplayAbility* OwningAbility, TSubclassOf<USpellContainer> SpellType);
    
};

