#pragma once
#include "CoreMinimal.h"
#include "ActivePersonalRelationshipModifier.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "ActivePersonalRelationshipModifier_SingleCharacter.generated.h"

class AGothicCharacterState;

UCLASS()
class G1R_API UActivePersonalRelationshipModifier_SingleCharacter : public UActivePersonalRelationshipModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FName TargetCharacterGlobalID;
    
    UActivePersonalRelationshipModifier_SingleCharacter();

    UFUNCTION(BlueprintImplementableEvent)
    ERelationship UpdateRelationship();
    
    UFUNCTION(BlueprintImplementableEvent)
    ERelationshipRelativeRank UpdateRank();
    
    UFUNCTION(BlueprintImplementableEvent)
    ERelationshipHostility UpdateHostility();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCharacter(AGothicCharacterState* NewTarget);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetTargetCharacter() const;
    
};

