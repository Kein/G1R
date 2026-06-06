#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GothicAssessmentResponseConfig.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class G1R_API UGothicAssessmentResponseConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FName> ConditionBits;
    
    UGothicAssessmentResponseConfig();

    UFUNCTION(BlueprintPure)
    FName GetConditionBitName(int32 BitIndex) const;
    
};

