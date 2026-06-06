#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptGameInstanceSubsystem.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "PersistentDataBaseSubsystem.generated.h"

class UGothicPersistentDataGame;

UCLASS(Abstract)
class G1R_API UPersistentDataBaseSubsystem : public UScriptGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGameplayMessageListenerHandle m_PreSaveListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_PostSaveListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_PreLoadListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_PostLoadListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_CleanListenerHandle;
    
    UPROPERTY()
    int32 m_LastSuccessfulLoadRequest;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_IsReplicated;
    
public:
    UPersistentDataBaseSubsystem();

    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPreSaveMessage(UGothicPersistentDataGame* SaveGame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPreLoadMessage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPostSaveMessage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPostLoadMessage(UGothicPersistentDataGame* SaveGame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCleanMessage();
    
};

