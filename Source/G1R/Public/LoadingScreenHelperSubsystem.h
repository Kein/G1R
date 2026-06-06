#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptEngineSubsystem.h"
#include "ELoadingScreenType.h"
#include "EQuestState.h"
#include "Templates/SubclassOf.h"
#include "LoadingScreenHelperSubsystem.generated.h"

class UGameInstance;
class UQuest;

UCLASS()
class G1R_API ULoadingScreenHelperSubsystem : public UScriptEngineSubsystem {
    GENERATED_BODY()
public:
    ULoadingScreenHelperSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetGameInstance(UGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLoadingScreenType(ELoadingScreenType LoadingScreenType);
    
    UFUNCTION(BlueprintPure)
    bool IsQuestInState(const TSubclassOf<UQuest>& _QuestClass, const TArray<EQuestState>& _ValidStates) const;
    
    UFUNCTION(BlueprintPure)
    ELoadingScreenType GetCurrentLoadingScreenType() const;
    
};

