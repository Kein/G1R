#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "EQuestState.h"
#include "SomeQuestStateChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "QuestSubsystem.generated.h"

class UQuest;

UCLASS(BlueprintType)
class G1R_API UQuestSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UQuest>, UQuest*> AllQuests;
    
    UPROPERTY(ReplicatedUsing=OnRep_AllQuestInstances, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> AllQuestInstances;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> TickingQuestsWhenInStateNone;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> TickingQuestsWhenInStateRunning;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> TickingQuestsWhenInStateAvailable;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSomeQuestStateChangedDelegate OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSomeQuestStateChangedDelegate OnQuestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FSomeQuestStateChangedDelegate OnQuestSucceeded;
    
    UPROPERTY(BlueprintAssignable)
    FSomeQuestStateChangedDelegate OnQuestAvailable;
    
    UQuestSubsystem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_AllQuestInstances();
    
public:
    UFUNCTION(BlueprintPure)
    UQuest* GetQuestByClass(TSubclassOf<UQuest> QuestClass) const;
    
    UFUNCTION(BlueprintPure)
    UQuest* GetParentQuest(TSubclassOf<UQuest> QuestClass) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetChildQuests(TSubclassOf<UQuest> QuestClass) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetAllQuestsInState(EQuestState State) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UQuest*> GetAllQuests() const;
    
};

