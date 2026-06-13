#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "InGameTime.h"
#include "GameTimeSubsystemConfig.generated.h"

//FIXME UCLASS(Const, EditInlineNew, Config=Game)
UCLASS(EditInlineNew, Config=Game)
class G1R_API UGameTimeSubsystemConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float GameTimeSpeed;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInGameTime StartTime;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInGameTime StartTimeVariance;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float DemoTimerDurationSeconds;
    
    UGameTimeSubsystemConfig();

};

