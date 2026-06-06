#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HintMessageWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class G1R_API UHintMessageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UTextBlock* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StayOnScreenForSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeoutDurationSeconds;
    
    UHintMessageWidget();

};

