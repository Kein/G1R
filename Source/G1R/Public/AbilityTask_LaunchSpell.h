#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AimingAssistance.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_LaunchSpell.generated.h"

class AActor;
class UAbilityTask_LaunchSpell;
class UGameplayAbility;
class UItemDefinition;
class USpellConfigurationContainer;

UCLASS()
class G1R_API UAbilityTask_LaunchSpell : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* SpellTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpellConfigurationContainer> SpellConfigurationContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> RuneItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAimingAssistance AimingAssistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UGameplayAbility> OwningAbility;
    
    UAbilityTask_LaunchSpell();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_LaunchSpell* TaskLaunchSpell(UGameplayAbility* NewOwningAbility, TSubclassOf<USpellConfigurationContainer> NewSpellConfigurationContainer, TSubclassOf<UItemDefinition> NewRuneItem, AActor* NewSpellTarget);
    
};

