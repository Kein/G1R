#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "InGameTime.h"
#include "GameTimeSubsystemConfig.generated.h"

UCLASS(Const, EditInlineNew, Config=Game)
class G1R_API UGameTimeSubsystemConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GameTimeSpeed;
    
    UPROPERTY(EditAnywhere)
    FInGameTime StartTime;
    
    UPROPERTY(EditAnywhere)
    FInGameTime StartTimeVariance;
    
    UPROPERTY(Config, EditAnywhere)
    float DemoTimerDurationSeconds;
    
    UGameTimeSubsystemConfig();

};

