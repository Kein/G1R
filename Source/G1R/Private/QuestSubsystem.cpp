#include "QuestSubsystem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UQuestSubsystem::UQuestSubsystem() {
}

void UQuestSubsystem::OnRep_AllQuestInstances() {
}

UQuest* UQuestSubsystem::GetQuestByClass(TSubclassOf<UQuest> QuestClass) const {
    return NULL;
}

UQuest* UQuestSubsystem::GetParentQuest(TSubclassOf<UQuest> QuestClass) const {
    return NULL;
}

TArray<UQuest*> UQuestSubsystem::GetChildQuests(TSubclassOf<UQuest> QuestClass) const {
    return TArray<UQuest*>();
}

TArray<UQuest*> UQuestSubsystem::GetAllQuestsInState(EQuestState State) const {
    return TArray<UQuest*>();
}

TArray<UQuest*> UQuestSubsystem::GetAllQuests() const {
    return TArray<UQuest*>();
}

void UQuestSubsystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestSubsystem, AllQuestInstances);
}


