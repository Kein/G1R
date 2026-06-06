#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FishingWidget.generated.h"

class AGothicCharacter;
class UChooseBaitWidget;
class UWidget;

UCLASS(EditInlineNew)
class G1R_API UFishingWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChooseBaitWidget* m_ChooseBaitWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* m_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* m_Right;
    
public:
    UFishingWidget();

    UFUNCTION(BlueprintCallable)
    void ShowChooseBait(bool Show);
    
};

