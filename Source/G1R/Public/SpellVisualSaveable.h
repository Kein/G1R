#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "ReplicatedStringMap.h"
#include "SaveWorldActorInterface.h"
#include "SpellVisual.h"
#include "Templates/SubclassOf.h"
#include "SpellVisualSaveable.generated.h"

class UItemDefinition;

UCLASS()
class G1R_API ASpellVisualSaveable : public ASpellVisual, public ISaveWorldActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_ItemDefinition;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_ComesFromLoadingData;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_PreSaveListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_PostSaveListenerHandle;
    
public:
    ASpellVisualSaveable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnRecoveredSavedData_Scriptable(const FReplicatedStringMap& Data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFillSaveData_Scriptable(FReplicatedStringMap& Data);
    
    UFUNCTION(BlueprintPure)
    FString GetDataFrom(const FReplicatedStringMap& Map, const FName& Key) const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsData(const FReplicatedStringMap& Map, const FName& Key) const;
    
    UFUNCTION(BlueprintPure)
    bool ComesFromLoadingData() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDataInto(FReplicatedStringMap& Map, const FName& Key, const FString& Value);
    

    // Fix for true pure virtual functions not being implemented
};

