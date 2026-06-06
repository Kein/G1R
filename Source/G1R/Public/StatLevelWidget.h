#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "StatLevelWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UStatLevelWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    UStatLevelWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetLevelProgress(int32& _Level, int32& _ExperienceMin, int32& _Experience, int32& _ExperienceMax, float& _ExperienceRatio) const;
    
};

