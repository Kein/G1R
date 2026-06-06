#pragma once
#include "CoreMinimal.h"
#include "SettingObject_Bool.h"
#include "SettingObject_Bool_PermanentDeath.generated.h"

UCLASS(EditInlineNew)
class G1R_API USettingObject_Bool_PermanentDeath : public USettingObject_Bool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool m_IsShown;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_SettingValue;
    
public:
    USettingObject_Bool_PermanentDeath();

};

