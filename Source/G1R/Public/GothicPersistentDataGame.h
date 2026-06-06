#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "InstancedStruct.h"
#include "GothicPersistentDataGame.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicPersistentDataGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_SaveVersionNumber;
    
private:
    UPROPERTY()
    FInstancedStruct m_Profile;
    
    UPROPERTY()
    TMap<FString, FInstancedStruct> m_GenericData;
    
public:
    UGothicPersistentDataGame();

    UFUNCTION(BlueprintCallable)
    bool GetGenericData(const FString& idToSave, FInstancedStruct& dataToLoad);
    
    UFUNCTION(BlueprintCallable)
    void AddGenericData(const FString& idToSave, const FInstancedStruct& dataToSave);
    
};

