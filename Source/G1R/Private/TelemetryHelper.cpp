#include "TelemetryHelper.h"

UTelemetryHelper::UTelemetryHelper() {
}

bool UTelemetryHelper::TestInfo(const FString& TestText) {
    return false;
}

void UTelemetryHelper::SetTelemetryEnabled(const bool TelemetryEnabled) {
}

void UTelemetryHelper::RefreshSaveInfoCache(const UWorld* World) {
}

bool UTelemetryHelper::OnUITabSwitched_Internal(const int32 PlayerLevel, const int32 Chapter, const FString& FromTab, const FString& ToTab) {
    return false;
}

bool UTelemetryHelper::OnUITabSwitched(const AGothicPlayerState* PlayerState, const FString& FromTab, const FString& ToTab) {
    return false;
}

bool UTelemetryHelper::OnUIScreenView_Internal(int32 PlayerLevel, const int32 Chapter, const FString& ScreenId, const FString& TabId, float Duration) {
    return false;
}

bool UTelemetryHelper::OnUIScreenView(const AGothicPlayerState* PlayerState, const FString& ScreenId, const FString& TabId, const float Duration) {
    return false;
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

bool UTelemetryHelper::OnPickpocketAttempt_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& VictimId, const FString& PickpocketSkill, const int32 PlayerDexterity, const int32 VictimDexterity, const float SuccessRatio, const bool Result) {
    return false;
}

bool UTelemetryHelper::OnPickpocketAttempt(const AGothicPlayerState* PlayerState, const AGothicCharacterState* VictimState, const FString& PickpocketSkill, const float SuccessRatio, const bool Result) {
    return false;
}

bool UTelemetryHelper::OnNPCKilled_Internal(const int32 PlayerLevel, const FString& KillerId, const int32 KillerLevel, const EPlayerGuild KillerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const FString& NPCId, const bool Unconscious, const int32 GainedXP) {
    return false;
}

bool UTelemetryHelper::OnNPCKilled(const AGothicCharacterState* KillerState, const int32 PosX, const int32 PosY, const FString& NPCId, const bool Unconscious, const int32 GainedXP) {
    return false;
}

bool UTelemetryHelper::OnLockpickResult_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& LockId, const int32 LockDifficulty, const FString& LockpickSkill, const int32 TimeInLock, const int32 PicksBroken, const bool Result) {
    return false;
}

bool UTelemetryHelper::OnLockpickResult(const AGothicPlayerState* PlayerState, const FString& LockId, const int32 LockDifficulty, const FString& LockpickSkill, const int32 TimeInLock, const int32 PicksBroken, const bool Result) {
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

bool UTelemetryHelper::OnGuildChanged_Internal(const int32 PlayerLevel, const int32 Chapter, const FString& OldGuild, const FString& NewGuild) {
    return false;
}

bool UTelemetryHelper::OnGuildChanged(const AGothicPlayerState* PlayerState, const FString& OldGuild, const FString& NewGuild) {
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

bool UTelemetryHelper::OnCrimeRegistered_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& VictimId, const FString& InstigatorID, const FString& CrimeType, const FString& InteractableId, const FString& AreaTag) {
    return false;
}

bool UTelemetryHelper::OnCrimeRegistered(const AGothicPlayerState* PlayerState, const FString& VictimId, const FString& InstigatorID, const FString& CrimeType, const FString& InteractableId, const FString& AreaTag) {
    return false;
}

bool UTelemetryHelper::OnCrimeFinePaid_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& NPCId, const int32 FineAmount, const int32 CrimeCount) {
    return false;
}

bool UTelemetryHelper::OnCrimeFinePaid(const AGothicPlayerState* PlayerState, const FString& NPCId, const int32 FineAmount, const int32 CrimeCount) {
    return false;
}

bool UTelemetryHelper::OnCombatStart_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& TargetId, const FString& InstigatorID, const FString& Assessment, const int32 PosX, const int32 PosY) {
    return false;
}

bool UTelemetryHelper::OnCombatStart(const AGothicPlayerState* PlayerState, const FString& TargetId, const FString& InstigatorID, const FString& Assessment, const int32 PosX, const int32 PosY) {
    return false;
}

bool UTelemetryHelper::GetTelemetryEnabled() {
    return false;
}


