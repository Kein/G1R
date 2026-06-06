#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GothicActivitySubsystem.generated.h"

UCLASS(Config=Engine)
class G1R_API UGothicActivitySubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    bool bEnabled;
    
    UPROPERTY(Config)
    float DelayBetweenActions;
    
    UPROPERTY(Config)
    int32 SubTaskNum;
    
public:
    UGothicActivitySubsystem();

};

