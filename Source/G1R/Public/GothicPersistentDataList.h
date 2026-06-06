#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ProfileData.h"
#include "SaveGamePublicData.h"
#include "Templates/SubclassOf.h"
#include "GothicPersistentDataList.generated.h"

class UGothicLocalPlayer;
class UGothicPersistentDataList;
class UGothicScreenshotsSave;

UCLASS()
class G1R_API UGothicPersistentDataList : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGothicLocalPlayer* m_OwningPlayer;
    
public:
    UPROPERTY()
    int32 m_SaveVersionNumber;
    
private:
    UPROPERTY()
    TArray<FString> m_SavedGamesNames;
    
    UPROPERTY()
    TMap<FString, FSaveGamePublicData> m_SavedGamesPublicData;
    
    UPROPERTY()
    UGothicScreenshotsSave* m_ScreenshotSave;
    
    UPROPERTY()
    int32 m_ScreenshotSaveId;
    
    UPROPERTY()
    TArray<FProfileData> m_Profiles;
    
public:
    UGothicPersistentDataList();

    UFUNCTION(BlueprintCallable)
    static UGothicPersistentDataList* LoadOrCreateSettings(const UGothicLocalPlayer* LocalPlayer, TSubclassOf<ULocalPlayerSaveGame> SaveGameClass);
    
};

