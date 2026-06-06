#pragma once
#include "CoreMinimal.h"
#include "SettingsPageWidget.h"
#include "SettingsPageWidget_InputMapping.generated.h"

class UInputMappingContext;

UCLASS(EditInlineNew)
class G1R_API USettingsPageWidget_InputMapping : public USettingsPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<UInputMappingContext*> m_InputMappingContexts;
    
public:
    USettingsPageWidget_InputMapping();

};

