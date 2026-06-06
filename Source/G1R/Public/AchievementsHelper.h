#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AchievementsHelper.generated.h"

UCLASS(BlueprintType)
class G1R_API UAchievementsHelper : public UObject {
    GENERATED_BODY()
public:
    UAchievementsHelper();

    UFUNCTION(BlueprintCallable)
    static void UnlockDemoCompleted();
    
};

