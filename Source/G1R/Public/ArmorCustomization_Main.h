#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "ArmorCustomization_Main.generated.h"

class UArmorCustomization;

UCLASS(EditInlineNew)
class G1R_API UArmorCustomization_Main : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UArmorCustomization* m_ContentWidget;
    
public:
    UArmorCustomization_Main();

protected:
    UFUNCTION(BlueprintCallable)
    void ButtonActionPushed();
    
};

