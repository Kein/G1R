#pragma once
#include "CoreMinimal.h"
#include "SettingObject_Enum.h"
#include "SettingObject_Enum_UpscalingQuality.generated.h"

UCLASS(EditInlineNew)
class USettingObject_Enum_UpscalingQuality : public USettingObject_Enum {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_UpscalingNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> m_SharpeningDLSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> m_SharpeningFSR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> m_SharpeningXeSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> m_SharpeningTSR;
    
public:
    USettingObject_Enum_UpscalingQuality();

};

