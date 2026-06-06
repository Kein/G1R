#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ScriptGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityPickAndEquip.generated.h"

class AActor;
class UItemDefinition;
class UUserWidget;

UCLASS()
class G1R_API UGameplayAbilityPickAndEquip : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UUserWidget> UIItemNotification;
    
protected:
    UPROPERTY()
    TSubclassOf<UItemDefinition> m_ToEquipItemDef;
    
    UPROPERTY()
    AActor* m_InteractiveActor;
    
    UPROPERTY()
    bool m_AutoPick;
    
public:
    UGameplayAbilityPickAndEquip();

    UFUNCTION(BlueprintCallable)
    void OnItemPicked(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimFinished();
    
};

