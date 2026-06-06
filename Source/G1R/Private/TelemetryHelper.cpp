#include "TelemetryHelper.h"

UTelemetryHelper::UTelemetryHelper() {
}

bool UTelemetryHelper::TestInfo(const FString& TestText) {
    return false;
}

void UTelemetryHelper::SetTelemetryEnabled(const bool TelemetryEnabled) {
}

bool UTelemetryHelper::OnSkillPointSpent_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& SkillId) {
    return false;
}

bool UTelemetryHelper::OnSkillPointSpent(const AGothicPlayerState* PlayerState, const UGameplayEffect_SkillGeneric* SkillId) {
    return false;
}

bool UTelemetryHelper::OnQuestUpdate_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const int32 GainedXP, const FString& QuestId, const FString& QuestVariable, const int32 QuestValue, const EQuestState QuestState) {
    return false;
}

bool UTelemetryHelper::OnQuestUpdate(const AGothicPlayerState* PlayerState, const int32 GainedXP, const FString& QuestId, const FString& QuestVariable, const int32 QuestValue, const EQuestState QuestState) {
    return false;
}

bool UTelemetryHelper::OnPlayerDeath_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const EDeathCause DeathCause, const FString& NPCId, const bool Unconscious) {
    return false;
}

bool UTelemetryHelper::OnPlayerDeath(const AGothicCharacterState* PlayerState, const int32 PosX, const int32 PosY, const EDeathCause DeathCause, const FString& NPCId, const bool Unconscious) {
    return false;
}

bool UTelemetryHelper::OnNPCKilled_Internal(const FString& KillerId, const int32 KillerLevel, const EPlayerGuild KillerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const FString& NPCId, const bool Unconscious, const int32 GainedXP) {
    return false;
}

bool UTelemetryHelper::OnNPCKilled(const AGothicCharacterState* KillerState, const int32 PosX, const int32 PosY, const FString& NPCId, const bool Unconscious, const int32 GainedXP) {
    return false;
}

bool UTelemetryHelper::OnLevelUp_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter) {
    return false;
}

bool UTelemetryHelper::OnLevelUp(const AGothicPlayerState* PlayerState) {
    return false;
}

bool UTelemetryHelper::OnInventoryUpdate_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const EItemAction ItemAction, const FString& ItemId, const int32 ItemAmount, const int32 ItemValue, const FString& ItemSlot) {
    return false;
}

bool UTelemetryHelper::OnInventoryUpdate(const AGothicPlayerState* PlayerState, const int32 PosX, const int32 PosY, const EItemAction ItemAction, const FString& ItemId, const int32 ItemAmount, const int32 ItemValue, const FString& ItemSlot) {
    return false;
}

bool UTelemetryHelper::OnEquipmentUpdate_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& ItemId, const FString& ItemSlot) {
    return false;
}

bool UTelemetryHelper::OnEquipmentUpdate(const AGothicPlayerState* PlayerState, const FString& ItemId, const FString& ItemSlot) {
    return false;
}

bool UTelemetryHelper::OnDialogueExecution_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& NPCId, const FString& DialogueId) {
    return false;
}

bool UTelemetryHelper::OnDialogueExecution(const AGothicPlayerState* PlayerState, const FString& NPCId, const FString& DialogueId) {
    return false;
}

bool UTelemetryHelper::GetTelemetryEnabled() {
    return false;
}


