#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicDeveloperSettings.generated.h"

UCLASS(BlueprintType, Config=Developer)
class G1R_API UGothicDeveloperSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool ShowMouseInPIEIfGamepadUsed;
    
    UPROPERTY(Config, EditAnywhere)
    bool DontFlushPressedKeysOnFocusChangeByGamepad;
    
    UPROPERTY(Config, EditAnywhere)
    bool NoNetTimeOut;
    
    UPROPERTY(Config, EditAnywhere)
    float NetUpdateFrequencyForSwitchesOutOfProcessingRange;
    
    UGothicDeveloperSettings();

    UFUNCTION(BlueprintCallable)
    void WriteToINI();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
};

