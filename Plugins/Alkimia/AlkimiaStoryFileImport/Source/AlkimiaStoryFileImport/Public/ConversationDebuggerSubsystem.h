#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "ConversationDebuggerSubsystem.generated.h"

UCLASS(BlueprintType, Config=Game)
class ALKIMIASTORYFILEIMPORT_API UConversationDebuggerSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bEnableStoryDebuggerOnStart;
    
    UConversationDebuggerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetGlobalVariables(const TMap<FName, FString>& VariablesByName);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterKnowledge(FName CharacterName, const TArray<FName>& Knowledge);
    
    UFUNCTION(BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintPure)
    FString GetConnectionStatus() const;
    
};

