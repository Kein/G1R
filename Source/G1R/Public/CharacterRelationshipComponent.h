#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "RelationshipEvaluation.h"
#include "Templates/SubclassOf.h"
#include "CharacterRelationshipComponent.generated.h"

class AGothicCharacterState;
class UActivePersonalRelationshipModifier;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacterState, meta=(BlueprintSpawnableComponent))
class G1R_API UCharacterRelationshipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UActivePersonalRelationshipModifier*> ActivePersonalModifiers;
    
    UPROPERTY(Transient)
    int64 ActiveModifiersGeneration;
    
    UCharacterRelationshipComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsOfHigherRankTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsNeutralTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHostileTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFriendlyTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnemyTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAngryTowards(const AGothicCharacterState* Other) const;
    
protected:
    UFUNCTION()
    void HandleOwnedTagUpdated(const FGameplayTag& Tag, bool bTagExists);
    
public:
    UFUNCTION(BlueprintPure)
    ERelationshipRelativeRank GetRelativeRankOf(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    ERelationship GetRelationshipTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    ERelationshipHostility GetHostilityTowards(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseSeverityOfCrimeIfCommitedByOther(const AGothicCharacterState* Other, FGameplayTag Crime) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UActivePersonalRelationshipModifier*> GetActiveModifersOfClass(TSubclassOf<UActivePersonalRelationshipModifier> ModifierClass) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacterState*> FindAllCharactersWithRelationshipInRadius(float QueryRadius, ERelationship Relationship) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacterState*> FindAllCharactersWithRelationshipAt(const FVector& QueryLocation, float QueryRadius, ERelationship Relationship) const;
    
    UFUNCTION(BlueprintPure)
    FRelationshipEvaluation EvaluateRelationshipWith(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesCrimeApplyForOther(const AGothicCharacterState* Other, FGameplayTag Crime) const;
    
    UFUNCTION(BlueprintCallable)
    UActivePersonalRelationshipModifier* AddActiveModifier(UActivePersonalRelationshipModifier* ModifierTemplate);
    
};

