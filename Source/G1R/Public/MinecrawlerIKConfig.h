#pragma once
#include "CoreMinimal.h"
#include "IKConfig.h"
#include "MinecrawlerIKConfig.generated.h"

UCLASS(EditInlineNew)
class G1R_API UMinecrawlerIKConfig : public UIKConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_BackRightBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_BackLeftBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_MidRightBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_MidLeftBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_FrontRightBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_FrontLeftBoneName;
    
public:
    UMinecrawlerIKConfig();

};

