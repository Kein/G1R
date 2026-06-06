#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AICombatTargetScoringEntry.generated.h"

class AGothicCharacter;

UCLASS(Abstract, Blueprintable)
class G1R_API UAICombatTargetScoringEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UAICombatTargetScoringEntry();

    UFUNCTION(BlueprintNativeEvent)
    bool VetoUsage(const AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool DoesEntryApplyTo(const AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float CalculateScore(const AGothicCharacter* Character) const;
    
};

