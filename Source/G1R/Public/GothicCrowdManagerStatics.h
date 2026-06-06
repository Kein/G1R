#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicCrowdManagerStatics.generated.h"

class AGothicAIController;
class AGothicCharacter;

UCLASS(BlueprintType)
class UGothicCrowdManagerStatics : public UObject {
    GENERATED_BODY()
public:
    UGothicCrowdManagerStatics();

    UFUNCTION(BlueprintCallable)
    static bool IsPathBlockedByOtherLowerRankCharacter(const AGothicCharacter* SelfCharacter, AGothicCharacter*& OutBlockingCharacter, bool bRequireSelfMoving);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPathBlockedByOther(const AGothicCharacter* SelfCharacter, AGothicAIController*& OutBlockingAiController, bool bRequireSelfMoving);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPathBlockedByGivenLowerRankCharacter(const AGothicCharacter* SelfCharacter, const AGothicCharacter* OtherGothicCharacter, bool bRequireSelfMoving);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPathBlockedByGivenCharacter(const AGothicCharacter* SelfCharacter, const AGothicCharacter* GivenGothicCharacter, bool bRequireSelfMoving);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPathBlockedByAny(const AGothicCharacter* SelfCharacter, bool bRequireSelfMoving);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceBetweenCrowdAgentCollisions(const AGothicCharacter* SelfCharacter, const AGothicCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    static float GetCrowdAgentRadius(const AGothicCharacter* SelfCharacter);
    
    UFUNCTION(BlueprintCallable)
    static float GetCrowdAgentHalfHeight(const AGothicCharacter* SelfCharacter);
    
};

