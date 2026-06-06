#include "GothicNPCState.h"
#include "DailyRoutineSimulationComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AGothicNPCState::AGothicNPCState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DailyRoutineTemplate = NULL;
    this->DailyRoutineTemplateAtSpawn = NULL;
    this->DailyRoutineSimulation = CreateDefaultSubobject<UDailyRoutineSimulationComponent>(TEXT("DailyRoutineSimulation"));
    this->AIAbility = NULL;
    this->SpawnState = ENPCSpawnState::None;
    this->VisualCustomizableObjectInstance = NULL;
    this->ForcedSignificanceOverride = -1.00f;
    this->bRemovedFromWorld = false;
    this->BlockingTaskTimeskipSeconds = 0.00f;
    this->VisualFeaturesDefinition = NULL;
    this->SummonedBy = NULL;
}

void AGothicNPCState::TryReviveInSimulationOrScheduleNewRequest(const FInGameTime& TimeReached) {
}

void AGothicNPCState::TeleportAndExchangeDailyRoutineToClass(TSubclassOf<UAIState_DailyRoutine> NewDailyRoutine, const FTransform& TeleportTo) {
}

void AGothicNPCState::SubscribeToReviveClockEventIfNeeded() {
}

void AGothicNPCState::SimulateDailyRoutineIfNeeded(const FInGameTime& LastUpdateAt, float DeltaSeconds) {
}

bool AGothicNPCState::ShouldHaveVisualsSpawned(float Significance) const {
    return false;
}

void AGothicNPCState::ReviveInSimulation() {
}

bool AGothicNPCState::ReportTimeSkipWhateverIsLeft() {
    return false;
}

bool AGothicNPCState::ReportTimeSkip(float SecondsThatWillBeSkipped) {
    return false;
}

void AGothicNPCState::RemoveFromWorld() {
}

bool AGothicNPCState::IsSignificantEnoughToSpawn(float Significance) const {
    return false;
}

bool AGothicNPCState::IsSignificantEnoughToPreloadVisuals(float Significance) const {
    return false;
}

bool AGothicNPCState::IsSignificantEnoughToKeepVisuals(float Significance) const {
    return false;
}

void AGothicNPCState::HandleCharacterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}

void AGothicNPCState::HandleCharacterCustomizableObjectInstanceUpdated(const FUpdateContext& Result) {
}

AGothicCharacterState* AGothicNPCState::GetSummonedBy() const {
    return NULL;
}

bool AGothicNPCState::GetRemovedFromWorld() const {
    return false;
}

AGothicNPCState* AGothicNPCState::FindNPCByUniqueName(const UObject* WorldContextObject, FName UniqueName) {
    return NULL;
}

AGothicNPCState* AGothicNPCState::FindNPCByGlobalId(const UObject* WorldContextObject, FName GlobalId) {
    return NULL;
}

UAIState_DailyRoutine* AGothicNPCState::FindDefaultDailyRoutine(const FString& Suffix) const {
    return NULL;
}

TArray<AGothicNPCState*> AGothicNPCState::FindAllNPCsByUniqueName(const UObject* WorldContextObject, FName UniqueName) {
    return TArray<AGothicNPCState*>();
}

void AGothicNPCState::ExchangeDailyRoutineToClass(TSubclassOf<UAIState_DailyRoutine> NewDailyRoutine) {
}

void AGothicNPCState::ExchangeDailyRoutine(UAIState_DailyRoutine* NewDailyRoutineTemplate) {
}

void AGothicNPCState::AssignDefaultDailyRoutine(const FString& Suffix) {
}

void AGothicNPCState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGothicNPCState, VisualCharacterClass);
}


