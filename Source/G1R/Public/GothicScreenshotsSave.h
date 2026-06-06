#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ScreenshotData.h"
#include "GothicScreenshotsSave.generated.h"

UCLASS()
class G1R_API UGothicScreenshotsSave : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, FScreenshotData> m_Screenshots;
    
    UPROPERTY()
    int32 m_ProfileListSaveSize;
    
    UGothicScreenshotsSave();

};

