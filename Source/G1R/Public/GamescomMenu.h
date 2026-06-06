#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GamescomMenu.generated.h"

UCLASS(EditInlineNew)
class G1R_API UGamescomMenu : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 FPSLimit;
    
public:
    UGamescomMenu();

};

