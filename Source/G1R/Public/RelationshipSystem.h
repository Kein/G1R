#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ERelationship.h"
#include "PersonalRelationshipEvaluation.h"
#include "RelationshipEvaluation.h"
#include "StaticRelationshipEvaluation.h"
#include "RelationshipSystem.generated.h"

class AGothicCharacterState;
class UPersonalRelationshipModifier;
class UStaticRelationshipModifier;

UCLASS(BlueprintType)
class G1R_API URelationshipSystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UPersonalRelationshipModifier*> PersonalRelationshipModifiers;
    
    UPROPERTY()
    TArray<UStaticRelationshipModifier*> StaticRelationshipModifiers;
    
public:
    URelationshipSystem();

    UFUNCTION(BlueprintPure)
    FStaticRelationshipEvaluation StaticRelationshipBetween(const FGameplayTag& MySpecies, const FGameplayTag& OtherSpecies, const FGameplayTag& MyGuild, const FGameplayTag& OtherGuild) const;
    
    UFUNCTION(BlueprintPure)
    FRelationshipEvaluation RelationshipBetween(const AGothicCharacterState* Me, const AGothicCharacterState* Other, float MaxAgeSeconds, bool bStaticOnly) const;
    
    UFUNCTION(BlueprintPure)
    FPersonalRelationshipEvaluation PersonalRelationshipBetween(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacterState*> FindAllCharactersWithRelationshipInRadius(const AGothicCharacterState* Me, const FVector& QueryLocation, float QueryRadius, ERelationship Relationship) const;
    
    UFUNCTION(BlueprintPure)
    FPersonalRelationshipEvaluation ActivePersonalRelationshipBetween(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(URelationshipSystem, STATGROUP_Tickables); }
};

