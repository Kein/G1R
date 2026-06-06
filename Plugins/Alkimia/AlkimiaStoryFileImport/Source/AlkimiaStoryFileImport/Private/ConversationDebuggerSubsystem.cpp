#include "ConversationDebuggerSubsystem.h"

UConversationDebuggerSubsystem::UConversationDebuggerSubsystem() {
    this->bEnableStoryDebuggerOnStart = false;
}

void UConversationDebuggerSubsystem::SetGlobalVariables(const TMap<FName, FString>& VariablesByName) {
}

void UConversationDebuggerSubsystem::SetCharacterKnowledge(FName CharacterName, const TArray<FName>& Knowledge) {
}

bool UConversationDebuggerSubsystem::IsConnected() const {
    return false;
}

FString UConversationDebuggerSubsystem::GetConnectionStatus() const {
    return TEXT("");
}


