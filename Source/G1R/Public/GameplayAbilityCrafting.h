#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "ECraftingState.h"
#include "EMultiStageState.h"
#include "EUICraftingStates.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityCrafting.generated.h"

class AInteractiveObjectActor;
class UAbilityTask_CraftItems;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UCarryComponent;
class UHUDCraftingController;
class UInteractAnimConfig;
class UInteractSensor;
class UItemRecipeDefinition;

UCLASS()
class G1R_API UGameplayAbilityCrafting : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EMultiStageState m_MultiStageState;
    
    UPROPERTY(Replicated)
    ECraftingState m_CraftingState;
    
    UPROPERTY()
    int32 m_NumToCraft;
    
    UPROPERTY()
    TArray<TSubclassOf<UItemRecipeDefinition>> m_ValidRecipes;
    
    UPROPERTY(Instanced)
    UInteractSensor* m_InteractComp;
    
    UPROPERTY()
    UAbilityTask_CraftItems* m_TaskCraftItem;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask;
    
    UPROPERTY()
    UAnimMontage* m_CharMontage;
    
    UPROPERTY()
    UAnimMontage* m_InteractiveObjectMontage;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Replicated)
    TSubclassOf<UItemRecipeDefinition> m_RecipeClass;
    
    UPROPERTY(Replicated)
    float m_RandSeed;
    
    UPROPERTY()
    TMap<FName, float> m_IdleBreakers;
    
    UPROPERTY(Instanced)
    UInteractAnimConfig* m_InteractionAnim;
    
    UPROPERTY()
    UHUDCraftingController* m_HUDCraftingController;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilityCrafting();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Reliable, Server)
    void Server_StartCrafting(ECraftingState newCraftState, TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num);
    
    UFUNCTION(Reliable, Server)
    void Server_SetNewRecipe(TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num);
    
    UFUNCTION(Reliable, Server)
    void Server_SetCraftingState(ECraftingState newCraftState);
    
    UFUNCTION(BlueprintCallable)
    void OnCraftFinished(bool mustFinish);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartCrafting(ECraftingState newCraftState, TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetNewRecipe(TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCraftingState(ECraftingState newCraftState);
    
    UFUNCTION(BlueprintCallable)
    void EventPlayAction(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimUnSpawnCraft(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimStartHud(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimShowProp(FGameplayEventData Payload);
    
    UFUNCTION()
    void EventAnimIdleEndSync();
    
    UFUNCTION(BlueprintCallable)
    void EventAnimIdleEnd(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimHiddeProp(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void EventAnimEnterEndedReceived();
    
    UFUNCTION(BlueprintCallable)
    void EventAnimApplyCraft(FGameplayEventData Payload);
    
    UFUNCTION()
    void ButtonCraftingMenuExit_Bind(EUICraftingStates UICraftingState);
    
    UFUNCTION()
    void ButtonCraftingActionStart_Bind(TSubclassOf<UItemRecipeDefinition> SelectedRecipe, int32 RecipeQuantity);
    
};

