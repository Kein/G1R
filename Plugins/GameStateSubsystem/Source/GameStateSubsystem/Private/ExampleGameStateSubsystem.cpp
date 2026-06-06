#include "ExampleGameStateSubsystem.h"
#include "Net/UnrealNetwork.h"

UExampleGameStateSubsystem::UExampleGameStateSubsystem() {
    this->RepVar1 = 0;
    this->RepVar2 = 0;
}

void UExampleGameStateSubsystem::ServerDoSomething_Implementation() {
}

void UExampleGameStateSubsystem::OnRep_RepVar2(int32 NewVar2) {
}

void UExampleGameStateSubsystem::ClientDoSomething_Implementation() {
}

void UExampleGameStateSubsystem::BlueprintDoAThing() {
}

void UExampleGameStateSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UExampleGameStateSubsystem, RepVar1);
    DOREPLIFETIME(UExampleGameStateSubsystem, RepVar2);
}


