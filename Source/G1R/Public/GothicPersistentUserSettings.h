#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GothicPersistentUserSettings.generated.h"

UCLASS(Config=Game)
class G1R_API UGothicPersistentUserSettings : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    int32 m_DefaultSaveSize;
    
public:
    UGothicPersistentUserSettings();

};

