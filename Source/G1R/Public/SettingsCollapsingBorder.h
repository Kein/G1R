#pragma once
#include "CoreMinimal.h"
#include "CommonBorder.h"
#include "Components/SlateWrapperTypes.h"
#include "SettingsCollapsingBorder.generated.h"

UCLASS()
class G1R_API USettingsCollapsingBorder : public UCommonBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESlateVisibility m_VisibleType;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility m_HiddenType;
    
public:
    USettingsCollapsingBorder();

};

