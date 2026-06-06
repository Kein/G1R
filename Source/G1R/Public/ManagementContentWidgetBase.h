#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AlkUserWidget.h"
#include "InterfaceManagementContentChild.h"
#include "ManagementContentWidgetBase.generated.h"

UCLASS(EditInlineNew)
class G1R_API UManagementContentWidgetBase : public UAlkUserWidget, public IInterfaceManagementContentChild {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_TabTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_RelevantButtonTags;
    
public:
    UManagementContentWidgetBase();


    // Fix for true pure virtual functions not being implemented
};

