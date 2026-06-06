#include "LoadingScreenHelperSubsystem.h"
#include "Templates/SubclassOf.h"

ULoadingScreenHelperSubsystem::ULoadingScreenHelperSubsystem() {
}

void ULoadingScreenHelperSubsystem::SetGameInstance(UGameInstance* GameInstance) {
}

void ULoadingScreenHelperSubsystem::SetCurrentLoadingScreenType(ELoadingScreenType LoadingScreenType) {
}

bool ULoadingScreenHelperSubsystem::IsQuestInState(const TSubclassOf<UQuest>& _QuestClass, const TArray<EQuestState>& _ValidStates) const {
    return false;
}

ELoadingScreenType ULoadingScreenHelperSubsystem::GetCurrentLoadingScreenType() const {
    return ELoadingScreenType::Default;
}


