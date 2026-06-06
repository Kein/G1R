#include "GameplayAbilityCrafting.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityCrafting::UGameplayAbilityCrafting() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_ApplyCooldown = true;
    this->m_MultiStageState = EMultiStageState::None;
    this->m_CraftingState = ECraftingState::None;
    this->m_NumToCraft = 1;
    this->m_InteractComp = NULL;
    this->m_TaskCraftItem = NULL;
    this->m_CharMontageTask = NULL;
    this->m_CharMontage = NULL;
    this->m_InteractiveObjectMontage = NULL;
    this->m_InteractiveObjectActor = NULL;
    this->m_CarryComponent = NULL;
    this->m_RecipeClass = NULL;
    this->m_RandSeed = 0.00f;
    this->m_InteractionAnim = NULL;
    this->m_HUDCraftingController = NULL;
}

void UGameplayAbilityCrafting::Server_StartCrafting_Implementation(ECraftingState newCraftState, TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num) {
}

void UGameplayAbilityCrafting::Server_SetNewRecipe_Implementation(TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num) {
}

void UGameplayAbilityCrafting::Server_SetCraftingState_Implementation(ECraftingState newCraftState) {
}

void UGameplayAbilityCrafting::OnCraftFinished(bool mustFinish) {
}

void UGameplayAbilityCrafting::Multicast_StartCrafting_Implementation(ECraftingState newCraftState, TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num) {
}

void UGameplayAbilityCrafting::Multicast_SetNewRecipe_Implementation(TSubclassOf<UItemRecipeDefinition> recipeClass, int32 Num) {
}

void UGameplayAbilityCrafting::Multicast_SetCraftingState_Implementation(ECraftingState newCraftState) {
}

void UGameplayAbilityCrafting::EventPlayAction(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::EventAnimUnSpawnCraft(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::EventAnimStartHud(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::EventAnimShowProp(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::EventAnimIdleEndSync() {
}

void UGameplayAbilityCrafting::EventAnimIdleEnd(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::EventAnimHiddeProp(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::EventAnimEnterEndedReceived() {
}

void UGameplayAbilityCrafting::EventAnimApplyCraft(FGameplayEventData Payload) {
}

void UGameplayAbilityCrafting::ButtonCraftingMenuExit_Bind(EUICraftingStates UICraftingState) {
}

void UGameplayAbilityCrafting::ButtonCraftingActionStart_Bind(TSubclassOf<UItemRecipeDefinition> SelectedRecipe, int32 RecipeQuantity) {
}

void UGameplayAbilityCrafting::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityCrafting, m_CraftingState);
    DOREPLIFETIME(UGameplayAbilityCrafting, m_RecipeClass);
    DOREPLIFETIME(UGameplayAbilityCrafting, m_RandSeed);
}


