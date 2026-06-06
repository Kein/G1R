#include "GothicCharacterState.h"
#include "Components/SceneComponent.h"
#include "CharacterRelationshipComponent.h"
#include "DataModuleComponent.h"
#include "GenericVoicelineComponent.h"
#include "GothicAbilitySystemComponent.h"
#include "GothicNavigationInvokerComponent.h"
#include "InteractorComponent.h"
#include "InventoryComponent.h"
#include "LongTermMemoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "PersonalBelongingsComponent.h"
#include "PreferredLocationComponent.h"
#include "RegionCharacterComponent.h"
#include "Templates/SubclassOf.h"

AGothicCharacterState::AGothicCharacterState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bIsABot = true;
    this->m_CurrentPersonality = NULL;
    this->bPersistent = true;
    this->AbilitySystemComponent = CreateDefaultSubobject<UGothicAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->DataModuleComponent = CreateDefaultSubobject<UDataModuleComponent>(TEXT("DataModuleComponent"));
    this->LongTermMemoryComponent = CreateDefaultSubobject<ULongTermMemoryComponent>(TEXT("LongTermMemoryComponent"));
    this->CharacterRelationshipComponent = CreateDefaultSubobject<UCharacterRelationshipComponent>(TEXT("CharacterRelationshipComponent"));
    this->PersonalBelongingsComponent = CreateDefaultSubobject<UPersonalBelongingsComponent>(TEXT("PersonalBelongingsComponent"));
    this->PreferredLocationComponent = CreateDefaultSubobject<UPreferredLocationComponent>(TEXT("PreferredLocationComponent"));
    this->GenericVoicelineComponent = CreateDefaultSubobject<UGenericVoicelineComponent>(TEXT("GenericVoicelineComponent"));
    this->RegionComponent = CreateDefaultSubobject<URegionCharacterComponent>(TEXT("RegionComponent"));
    this->GothicNavigationInvokerComponent = CreateDefaultSubobject<UGothicNavigationInvokerComponent>(TEXT("GothicNavigationInvokerComponent"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->InteractorComponent = CreateDefaultSubobject<UInteractorComponent>(TEXT("InteractorComponent"));
    this->CharacterConfig = NULL;
    this->m_PartySlotIndex = 0;
    this->OwnedCharacter = NULL;
}

AGothicCharacterState* AGothicCharacterState::TryGetCharacterStateFromActor(const AActor* Actor) {
    return NULL;
}

void AGothicCharacterState::SetTrueGuild(TSubclassOf<UGameplayEffect_Guild> GuildEffectClass) {
}

void AGothicCharacterState::SetPersistent(bool Value) {
}

void AGothicCharacterState::SetCurrentPersonality(const TSubclassOf<UGothicCharacterPersonality> personality) {
}

void AGothicCharacterState::SetCharacterTransform(const FTransform& Transform) {
}

void AGothicCharacterState::SetCharacterRotation(const FRotator& Rotation) {
}

void AGothicCharacterState::SetCharacterLocationAndDirection(const FVector& Location, const FVector& Forward) {
}

void AGothicCharacterState::SetCharacterLocation(const FVector& Location) {
}

FName AGothicCharacterState::MakeCharacterGlobalId(const UObject* WorldContextObject, FName CharacterUniqueName, const FString& SpawnedBy, int32 SpawnIndex, const FVector& Location) {
    return NAME_None;
}

void AGothicCharacterState::LeavePartyOf(AGothicCharacterState* Other) {
}

void AGothicCharacterState::LearnRecipe(TSubclassOf<UItemRecipeDefinition> RecipeDefinition) {
}

void AGothicCharacterState::JoinPartyOf(AGothicCharacterState* Other) {
}

bool AGothicCharacterState::IsTrulyPartOfGuild(const FGameplayTag& GuildTag) const {
    return false;
}

bool AGothicCharacterState::IsPersistent() const {
    return false;
}

bool AGothicCharacterState::IsOfSpecies(const FGameplayTag& SpeciesTag) const {
    return false;
}

bool AGothicCharacterState::IsInPartyWith(const AGothicCharacterState* Other) const {
    return false;
}

bool AGothicCharacterState::IsInFullyLoadedRegion(float Radius) const {
    return false;
}

bool AGothicCharacterState::IsDefeated() const {
    return false;
}

bool AGothicCharacterState::IsDead() const {
    return false;
}

bool AGothicCharacterState::IsCharacterVisible() const {
    return false;
}

bool AGothicCharacterState::IsApparentlyPartOfGuild(const FGameplayTag& GuildTag) const {
    return false;
}

bool AGothicCharacterState::HasLearnedRecipe(TSubclassOf<UItemRecipeDefinition> RecipeDefinition) const {
    return false;
}

bool AGothicCharacterState::HasEverLeftArea(FGameplayTag Area) {
    return false;
}

bool AGothicCharacterState::HasEverEnteredArea(FGameplayTag Area) {
    return false;
}

void AGothicCharacterState::HandlePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn) {
}

UGenericVoicelineComponent* AGothicCharacterState::GetVoiceline() const {
    return NULL;
}

FGameplayTag AGothicCharacterState::GetSpecies() const {
    return FGameplayTag{};
}

UCharacterRelationshipComponent* AGothicCharacterState::GetRelationship() const {
    return NULL;
}

URegionCharacterComponent* AGothicCharacterState::GetRegionTraits() const {
    return NULL;
}

UPreferredLocationComponent* AGothicCharacterState::GetPreferredLocation() const {
    return NULL;
}

UGothicCharacterPersonality* AGothicCharacterState::GetPersonality() const {
    return NULL;
}

ULongTermMemoryComponent* AGothicCharacterState::GetLongTermMemory() const {
    return NULL;
}

FGameplayTag AGothicCharacterState::GetLastEnteredArea() const {
    return FGameplayTag{};
}

UInventoryComponent* AGothicCharacterState::GetInventory() const {
    return NULL;
}

AGothicCharacter* AGothicCharacterState::GetInstigatorCharacter() const {
    return NULL;
}

FGameplayTag AGothicCharacterState::GetGuild() const {
    return FGameplayTag{};
}

FGothicPathfollowSettings AGothicCharacterState::GetDefaultPathfollowingSetting() {
    return FGothicPathfollowSettings{};
}

TSubclassOf<UInteractiveObjectDefinition> AGothicCharacterState::GetDefaultInteraction() const {
    return NULL;
}

FGameplayTag AGothicCharacterState::GetDefaultFacialExpression() const {
    return FGameplayTag{};
}

TSubclassOf<UGothicCharacterPersonality> AGothicCharacterState::GetCurrentPersonality() const {
    return NULL;
}

FName AGothicCharacterState::GetCharacterUniqueName() const {
    return NAME_None;
}

FTransform AGothicCharacterState::GetCharacterTransform() const {
    return FTransform{};
}

FRotator AGothicCharacterState::GetCharacterRotation() const {
    return FRotator{};
}

float AGothicCharacterState::GetCharacterRadius() const {
    return 0.0f;
}

FVector AGothicCharacterState::GetCharacterLookingDirection() const {
    return FVector{};
}

FVector AGothicCharacterState::GetCharacterLocation() const {
    return FVector{};
}

float AGothicCharacterState::GetCharacterHalfHeight() const {
    return 0.0f;
}

FName AGothicCharacterState::GetCharacterGlobalId() const {
    return NAME_None;
}

AGothicCharacter* AGothicCharacterState::GetCharacterEvenDuringInit() const {
    return NULL;
}

FText AGothicCharacterState::GetCharacterDisplayName() const {
    return FText::GetEmpty();
}

UCharacterDefinition* AGothicCharacterState::GetCharacterDefinition() const {
    return NULL;
}

AGothicCharacter* AGothicCharacterState::GetCharacter() const {
    return NULL;
}

FGameplayTag AGothicCharacterState::GetAreaTagOfLocation() const {
    return FGameplayTag{};
}

FVector AGothicCharacterState::GetApproximateNavAgentLocation() const {
    return FVector{};
}

FVector AGothicCharacterState::GetApproximateFeetLocation() const {
    return FVector{};
}

TArray<TSubclassOf<UItemRecipeDefinition>> AGothicCharacterState::GetAllKnownRecipes() const {
    return TArray<TSubclassOf<UItemRecipeDefinition>>();
}

FGameplayTagContainer AGothicCharacterState::GetAllAreaTagsOfLocation() const {
    return FGameplayTagContainer{};
}

AGothicCharacterState* AGothicCharacterState::FindClosestByUniqueName(const UObject* WorldContextObject, FName UniqueName, const FVector& Location) {
    return NULL;
}

AGothicCharacterState* AGothicCharacterState::FindByUniqueName(const UObject* WorldContextObject, FName UniqueName) {
    return NULL;
}

AGothicCharacterState* AGothicCharacterState::FindByGlobalId(const UObject* WorldContextObject, FName GlobalId) {
    return NULL;
}

TArray<AGothicCharacterState*> AGothicCharacterState::FindAllInRadiusAroundWithTags(const UObject* WorldContextObject, const FVector& Location, float Radius, const FGameplayTagContainer& WithAnyOf, const FGameplayTagContainer& WithoutAnyOf) {
    return TArray<AGothicCharacterState*>();
}

TArray<AGothicCharacterState*> AGothicCharacterState::FindAllInRadiusAround(const UObject* WorldContextObject, const FVector& Location, float Radius) {
    return TArray<AGothicCharacterState*>();
}

TArray<AGothicCharacterState*> AGothicCharacterState::FindAllByUniqueName(const UObject* WorldContextObject, FName UniqueName) {
    return TArray<AGothicCharacterState*>();
}

void AGothicCharacterState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGothicCharacterState, CharacterConfig);
    DOREPLIFETIME(AGothicCharacterState, m_PartyConfigId);
    DOREPLIFETIME(AGothicCharacterState, m_PartySlotIndex);
    DOREPLIFETIME(AGothicCharacterState, CharacterGlobalId);
}


