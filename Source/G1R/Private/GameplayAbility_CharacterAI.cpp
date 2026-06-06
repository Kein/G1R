#include "GameplayAbility_CharacterAI.h"
#include "AIState_SelfConversation.h"
#include "Templates/SubclassOf.h"

UGameplayAbility_CharacterAI::UGameplayAbility_CharacterAI() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerExecution;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->m_ActivateAbilityOnGranted = true;
    this->InitialDailyRoutineClass = NULL;
    this->ConversationAIStateClass = NULL;
    this->SelfConversationAIStateClass = UAIState_SelfConversation::StaticClass();
    this->AfterDefeatedAIStateClass = NULL;
    this->DefeatedAIStateClass = NULL;
    this->ControlledAIStateClass = NULL;
    this->FoundSomeoneInMyBedAIStateClass = NULL;
    this->ScheduledNextState = NULL;
    this->HighPriorityAssessmentModuleClass = NULL;
    this->AssessmentModuleClass = NULL;
    this->ActionsToBindAsFunctions.AddDefaulted(2);
    this->DesiredWalkSpeed = EWalkSpeed::Count;
    this->DailyRoutineInstance = NULL;
}

void UGameplayAbility_CharacterAI::SwitchToDailyRoutineIfNothingElseToDo() {
}

void UGameplayAbility_CharacterAI::SwitchToDailyRoutine() {
}

void UGameplayAbility_CharacterAI::SwitchToConversationState() {
}

void UGameplayAbility_CharacterAI::SwitchAIStateWithOthersImmediately(UCharacterAIState* State, const TArray<AGothicCharacter*>& Others) {
}

void UGameplayAbility_CharacterAI::SwitchAIStateWithOthers(UCharacterAIState* State, const TArray<AGothicCharacter*>& Others) {
}

void UGameplayAbility_CharacterAI::SwitchAIStateImmediatelyToClass(TSubclassOf<UCharacterAIState> StateClass, AGothicCharacter* Other) {
}

void UGameplayAbility_CharacterAI::SwitchAIStateImmediately(UCharacterAIState* State, AGothicCharacter* Other) {
}

void UGameplayAbility_CharacterAI::SwitchAIState(UCharacterAIState* State, AGothicCharacter* Other) {
}

void UGameplayAbility_CharacterAI::StopTargetingEnemy(EGothicFocusPriority FocusPriority) {
}

void UGameplayAbility_CharacterAI::StartScheduledNextState() {
}

void UGameplayAbility_CharacterAI::SetTargetEnemyComponent(USceneComponent* EnemyActorComponent, EGothicFocusPriority FocusPriority, UAbilityTaskGeneric* TaskLifeAnchor, FName SocketName) {
}

void UGameplayAbility_CharacterAI::SetTargetEnemy(AGothicCharacter* EnemyActor, EGothicFocusPriority FocusPriority, UAbilityTaskGeneric* TaskLifeAnchor) {
}

bool UGameplayAbility_CharacterAI::ResolveLocationByName(FName KnownLocationName, FVector& OutVector) const {
    return false;
}

void UGameplayAbility_CharacterAI::RemoveFromSpawnedStorage(TSubclassOf<UAIValueSet> ValueSetClass) {
}

void UGameplayAbility_CharacterAI::RemoveFromPermanentStorage(TSubclassOf<UAIValueSet> ValueSetClass) {
}

float UGameplayAbility_CharacterAI::RateRangedWeaponStrength_Implementation(UWeaponArcheryDefinition* Weapon) {
    return 0.0f;
}

float UGameplayAbility_CharacterAI::RateMeleeWeaponStrength_Implementation(UWeaponMeleeDefinition* Weapon) {
    return 0.0f;
}

void UGameplayAbility_CharacterAI::ProcessAllPendingAssessments() {
}

void UGameplayAbility_CharacterAI::OnGracefulEndRequestFulfilled(UAbilityTaskGeneric* State, EGenericTaskResult Result) {
}

void UGameplayAbility_CharacterAI::LeaveGroupsWithClass(TSubclassOf<UGothicAIGroup> GroupClass) {
}

void UGameplayAbility_CharacterAI::LeaveAllGroups() {
}

void UGameplayAbility_CharacterAI::JoinGroup(UGothicAIGroup* Group) {
}

bool UGameplayAbility_CharacterAI::IsUnconscious() const {
    return false;
}

bool UGameplayAbility_CharacterAI::IsInState(TSubclassOf<UCharacterAIState> StateClass) const {
    return false;
}

bool UGameplayAbility_CharacterAI::IsFocusedBy(AGothicCharacter* Other) {
    return false;
}

bool UGameplayAbility_CharacterAI::IsDoingDailyRoutine() const {
    return false;
}

bool UGameplayAbility_CharacterAI::IsDoingConversationState() const {
    return false;
}

bool UGameplayAbility_CharacterAI::IsDoingAITaskOfClass(TSubclassOf<UAbilityTask_AI> AITaskClass) const {
    return false;
}

bool UGameplayAbility_CharacterAI::HasPendingScheduledState() const {
    return false;
}

bool UGameplayAbility_CharacterAI::HasInSpawnedStorage(TSubclassOf<UAIValueSet> ValueSetClass) const {
    return false;
}

bool UGameplayAbility_CharacterAI::HasInPermanentStorage(TSubclassOf<UAIValueSet> ValueSetClass) const {
    return false;
}

bool UGameplayAbility_CharacterAI::HasCurrentTerritoryOfClass(TSubclassOf<UTerritoryConfig> TerritoryClass) {
    return false;
}

void UGameplayAbility_CharacterAI::HandleNewAvatarGameplayReady() {
}

AGothicCharacter* UGameplayAbility_CharacterAI::GetTargetEnemy() const {
    return NULL;
}

AGothicCharacter* UGameplayAbility_CharacterAI::GetSelf() const {
    return NULL;
}

UCharacterAIState* UGameplayAbility_CharacterAI::GetScheduledDailyRoutineAIStateTemplate() const {
    return NULL;
}

AActor* UGameplayAbility_CharacterAI::GetPersistentSelf() const {
    return NULL;
}

UGothicAIGroup* UGameplayAbility_CharacterAI::GetGroupStatus(TSubclassOf<UGothicAIGroup> GroupClass) const {
    return NULL;
}

UAIState_DailyRoutine* UGameplayAbility_CharacterAI::GetDailyRoutineTemplate() const {
    return NULL;
}

UAIState_DailyRoutine* UGameplayAbility_CharacterAI::GetDailyRoutineIfActive() const {
    return NULL;
}

TSubclassOf<UTerritoryConfig> UGameplayAbility_CharacterAI::GetCurrentTerritoryClass() const {
    return NULL;
}

UTerritoryConfig* UGameplayAbility_CharacterAI::GetCurrentTerritory() const {
    return NULL;
}

UCharacterAIState* UGameplayAbility_CharacterAI::GetCurrentState() const {
    return NULL;
}

UCharacterAIState* UGameplayAbility_CharacterAI::GetCurrentRootState() const {
    return NULL;
}

TArray<UAbilityTaskGeneric*> UGameplayAbility_CharacterAI::GetActiveTasksOfClass(TSubclassOf<UAbilityTaskGeneric> TaskClass) {
    return TArray<UAbilityTaskGeneric*>();
}

TSet<UGothicAIGroup*> UGameplayAbility_CharacterAI::FindGroupInPerceivedCharacters(TSubclassOf<UGothicAIGroup> GroupClass) {
    return TSet<UGothicAIGroup*>();
}

TSet<UGothicAIGroup*> UGameplayAbility_CharacterAI::FindGroupInCharactersAtLocation(TSubclassOf<UGothicAIGroup> GroupClass, const FVector& Location, float Radius) {
    return TSet<UGothicAIGroup*>();
}

UWeaponArcheryDefinition* UGameplayAbility_CharacterAI::FindBestRangedWeapon_Implementation() {
    return NULL;
}

UWeaponMeleeDefinition* UGameplayAbility_CharacterAI::FindBestMeleeWeapon_Implementation() {
    return NULL;
}

UCharacterAIState* UGameplayAbility_CharacterAI::FindActiveStateByClass(TSubclassOf<UCharacterAIState> StateClass) const {
    return NULL;
}

void UGameplayAbility_CharacterAI::EndAllStatesAndTasks() {
}

UGothicAIGroup* UGameplayAbility_CharacterAI::CreateAndJoinGroup(TSubclassOf<UGothicAIGroup> GroupClass) {
    return NULL;
}

int32 UGameplayAbility_CharacterAI::CancelStatesOfClass(TSubclassOf<UCharacterAIState> Class) {
    return 0;
}

void UGameplayAbility_CharacterAI::CancelConversationStateAndDoDailyRoutine() {
}

void UGameplayAbility_CharacterAI::CancelAllStatesAndTasks() {
}

void UGameplayAbility_CharacterAI::CancelAllExceptRootState() {
}

int32 UGameplayAbility_CharacterAI::CancelAITasksOfClass(TSubclassOf<UAbilityTask_AI> Class) {
    return 0;
}





bool UGameplayAbility_CharacterAI::AssessEventWithExtraTags(const FGameplayTag& AIEventTag, const FRememberedPerception& FromPerception, const FGameplayTagContainer& ExtraEventTags) {
    return false;
}

void UGameplayAbility_CharacterAI::AssessEventFromPerception(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, FGameplayTag Assess) {
}

bool UGameplayAbility_CharacterAI::AssessEvent(const FGameplayTag& AIEventTag, const FRememberedPerception& FromPerception) {
    return false;
}


