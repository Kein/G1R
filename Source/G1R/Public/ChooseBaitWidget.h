#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChooseBaitWidget.generated.h"

class AGothicCharacter;

UCLASS(EditInlineNew)
class G1R_API UChooseBaitWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_OwnerCharacter;
    
public:
    UChooseBaitWidget();

};

