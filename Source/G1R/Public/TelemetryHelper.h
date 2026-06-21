#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDeathCause.h"
#include "EItemAction.h"
#include "EPlayerGuild.h"
#include "EQuestState.h"
#include "TelemetryHelper.generated.h"

class AGothicCharacterState;
class AGothicPlayerState;
class UGameplayEffect_SkillGeneric;
class UWorld;

UCLASS(BlueprintType)
class G1R_API UTelemetryHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTelemetryHelper();

    UFUNCTION(BlueprintCallable)
    static bool TestInfo(const FString& TestText);
    
    UFUNCTION(BlueprintCallable)
    static void SetTelemetryEnabled(const bool TelemetryEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshSaveInfoCache(const UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool OnUITabSwitched_Internal(const int32 PlayerLevel, const int32 Chapter, const FString& FromTab, const FString& ToTab);
    
    UFUNCTION(BlueprintCallable)
    static bool OnUITabSwitched(const AGothicPlayerState* PlayerState, const FString& FromTab, const FString& ToTab);
    
    UFUNCTION(BlueprintCallable)
    static bool OnUIScreenView_Internal(int32 PlayerLevel, const int32 Chapter, const FString& ScreenId, const FString& TabId, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static bool OnUIScreenView(const AGothicPlayerState* PlayerState, const FString& ScreenId, const FString& TabId, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    static bool OnSkillPointSpent_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& SkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool OnSkillPointSpent(const AGothicPlayerState* PlayerState, const UGameplayEffect_SkillGeneric* SkillId);
    
    UFUNCTION(BlueprintCallable)
    static bool OnQuestUpdate_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const int32 GainedXP, const FString& QuestId, const FString& QuestVariable, const int32 QuestValue, const EQuestState QuestState);
    
    UFUNCTION(BlueprintCallable)
    static bool OnQuestUpdate(const AGothicPlayerState* PlayerState, const int32 GainedXP, const FString& QuestId, const FString& QuestVariable, const int32 QuestValue, const EQuestState QuestState);
    
    UFUNCTION(BlueprintCallable)
    static bool OnPlayerDeath_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const EDeathCause DeathCause, const FString& NPCId, const bool Unconscious);
    
    UFUNCTION(BlueprintCallable)
    static bool OnPlayerDeath(const AGothicCharacterState* PlayerState, const int32 PosX, const int32 PosY, const EDeathCause DeathCause, const FString& NPCId, const bool Unconscious);
    
    UFUNCTION(BlueprintCallable)
    static bool OnPickpocketAttempt_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& VictimId, const FString& PickpocketSkill, const int32 PlayerDexterity, const int32 VictimDexterity, const float SuccessRatio, const bool Result);
    
    UFUNCTION(BlueprintCallable)
    static bool OnPickpocketAttempt(const AGothicPlayerState* PlayerState, const AGothicCharacterState* VictimState, const FString& PickpocketSkill, const float SuccessRatio, const bool Result);
    
    UFUNCTION(BlueprintCallable)
    static bool OnNPCKilled_Internal(const int32 PlayerLevel, const FString& KillerId, const int32 KillerLevel, const EPlayerGuild KillerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const FString& NPCId, const bool Unconscious, const int32 GainedXP);
    
    UFUNCTION(BlueprintCallable)
    static bool OnNPCKilled(const AGothicCharacterState* KillerState, const int32 PosX, const int32 PosY, const FString& NPCId, const bool Unconscious, const int32 GainedXP);
    
    UFUNCTION(BlueprintCallable)
    static bool OnLockpickResult_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& LockId, const int32 LockDifficulty, const FString& LockpickSkill, const int32 TimeInLock, const int32 PicksBroken, const bool Result);
    
    UFUNCTION(BlueprintCallable)
    static bool OnLockpickResult(const AGothicPlayerState* PlayerState, const FString& LockId, const int32 LockDifficulty, const FString& LockpickSkill, const int32 TimeInLock, const int32 PicksBroken, const bool Result);
    
    UFUNCTION(BlueprintCallable)
    static bool OnLevelUp_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter);
    
    UFUNCTION(BlueprintCallable)
    static bool OnLevelUp(const AGothicPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool OnInventoryUpdate_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const int32 PosX, const int32 PosY, const EItemAction ItemAction, const FString& ItemId, const int32 ItemAmount, const int32 ItemValue, const FString& ItemSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool OnInventoryUpdate(const AGothicPlayerState* PlayerState, const int32 PosX, const int32 PosY, const EItemAction ItemAction, const FString& ItemId, const int32 ItemAmount, const int32 ItemValue, const FString& ItemSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool OnGuildChanged_Internal(const int32 PlayerLevel, const int32 Chapter, const FString& OldGuild, const FString& NewGuild);
    
    UFUNCTION(BlueprintCallable)
    static bool OnGuildChanged(const AGothicPlayerState* PlayerState, const FString& OldGuild, const FString& NewGuild);
    
    UFUNCTION(BlueprintCallable)
    static bool OnEquipmentUpdate_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& ItemId, const FString& ItemSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool OnEquipmentUpdate(const AGothicPlayerState* PlayerState, const FString& ItemId, const FString& ItemSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool OnDialogueExecution_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& NPCId, const FString& DialogueId);
    
    UFUNCTION(BlueprintCallable)
    static bool OnDialogueExecution(const AGothicPlayerState* PlayerState, const FString& NPCId, const FString& DialogueId);
    
    UFUNCTION(BlueprintCallable)
    static bool OnCrimeRegistered_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& VictimId, const FString& InstigatorID, const FString& CrimeType, const FString& InteractableId, const FString& AreaTag);
    
    UFUNCTION(BlueprintCallable)
    static bool OnCrimeRegistered(const AGothicPlayerState* PlayerState, const FString& VictimId, const FString& InstigatorID, const FString& CrimeType, const FString& InteractableId, const FString& AreaTag);
    
    UFUNCTION(BlueprintCallable)
    static bool OnCrimeFinePaid_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& NPCId, const int32 FineAmount, const int32 CrimeCount);
    
    UFUNCTION(BlueprintCallable)
    static bool OnCrimeFinePaid(const AGothicPlayerState* PlayerState, const FString& NPCId, const int32 FineAmount, const int32 CrimeCount);
    
    UFUNCTION(BlueprintCallable)
    static bool OnCombatStart_Internal(const int32 PlayerLevel, const EPlayerGuild PlayerGuild, const int32 Chapter, const FString& TargetId, const FString& InstigatorID, const FString& Assessment, const int32 PosX, const int32 PosY);
    
    UFUNCTION(BlueprintCallable)
    static bool OnCombatStart(const AGothicPlayerState* PlayerState, const FString& TargetId, const FString& InstigatorID, const FString& Assessment, const int32 PosX, const int32 PosY);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTelemetryEnabled();
    
};

