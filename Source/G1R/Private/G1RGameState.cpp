#include "G1RGameState.h"
#include "G1RGameQueryComponent.h"
#include "Net/UnrealNetwork.h"
#include "TraderManager.h"

AG1RGameState::AG1RGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_QueryComponent = CreateDefaultSubobject<UG1RGameQueryComponent>(TEXT("QueryComponent"));
    this->m_TraderManager = CreateDefaultSubobject<UTraderManager>(TEXT("TraderManagerComponent"));
    this->m_WorldDefinition = NULL;
    this->m_MagicCircles.AddDefaulted(7);
}

void AG1RGameState::Server_SetDoorOpenState_Implementation(bool IsOpen, const FName& doorConfigName) {
}

void AG1RGameState::Server_SaveFloatData_Implementation(const FName& DataName, float Data, bool isTemp) {
}

void AG1RGameState::Server_GiveXP_Implementation(AActor* xpInstigator, AActor* xpObjective, const FGameplayTag& bountyType) {
}

void AG1RGameState::SaveWorldFloatData(const UWorld* World, const FName& DataName, float Data) {
}

void AG1RGameState::SaveFloatData(const FName& DataName, float Data) {
}

bool AG1RGameState::IsDoorOpenWorld(const UWorld* World, const FName& doorConfigName) {
    return false;
}

bool AG1RGameState::IsDoorOpen(const FName& doorConfigName) {
    return false;
}

void AG1RGameState::GlobalSaveFloatData(const UObject* WorldContextObject, const FName& DataName, float Data) {
}

bool AG1RGameState::GlobalGetFloatData(const UObject* WorldContextObject, const FName& DataName, float& Data) {
    return false;
}

bool AG1RGameState::GetWorldFloatData(const UWorld* World, const FName& DataName, float& Data) {
    return false;
}

UWorldDefinition* AG1RGameState::GetWorldDefinition(const UWorld* World) {
    return NULL;
}

int32 AG1RGameState::GetTorchId() {
    return 0;
}

bool AG1RGameState::GetFloatData(const FName& DataName, float& Data) {
    return false;
}

TArray<AGothicPlayerState*> AG1RGameState::GetAllPlayers() {
    return TArray<AGothicPlayerState*>();
}

bool AG1RGameState::DoesDoorExist(const UWorld* World, const FName& doorConfigName) {
    return false;
}

void AG1RGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AG1RGameState, m_GameplayManagers);
    DOREPLIFETIME(AG1RGameState, m_WorldDefinition);
    DOREPLIFETIME(AG1RGameState, m_DoorsOpen);
    DOREPLIFETIME(AG1RGameState, m_DoorsClosed);
    DOREPLIFETIME(AG1RGameState, m_GenericDataName);
    DOREPLIFETIME(AG1RGameState, m_GenericDataFloat);
    DOREPLIFETIME(AG1RGameState, m_TempGenericDataName);
    DOREPLIFETIME(AG1RGameState, m_TempGenericDataFloat);
}


