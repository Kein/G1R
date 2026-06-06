#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "DocumentSubsystem.generated.h"

class AGothicCharacterState;
class UDocumentSegment;

UCLASS(BlueprintType)
class G1R_API UDocumentSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UDocumentSegment*> AutoConditionalSegmentInstances;
    
public:
    UDocumentSubsystem();

    UFUNCTION(BlueprintCallable)
    void NotifyPotentialSegmentUnlockForPlayer(const TArray<FName>& InvolvedCharacterUniqueNames);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPotentialSegmentUnlock(AGothicCharacterState* Reader, const TArray<FName>& InvolvedCharacterUniqueNames);
    
};

