#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERelationship.h"
#include "ERelationshipHostility.h"
#include "ERelationshipRelativeRank.h"
#include "RelationshipModifier.h"
#include "PersonalRelationshipModifier.generated.h"

class AGothicCharacterState;

UCLASS(Abstract, Blueprintable)
class G1R_API UPersonalRelationshipModifier : public URelationshipModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Weight;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ApplicableWhenOtherHasAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ApplicableWhenSelfHasAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ApplicableWhenOtherHasAllOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer ApplicableWhenSelfHasAllOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer NotApplicableWhenOtherHasAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer NotApplicableWhenSelfHasAnyOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer NotApplicableWhenOtherHasAllOf;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer NotApplicableWhenSelfHasAllOf;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplicableWhenOtherIsPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplicableWhenOtherIsNPC;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<ERelationship> NotApplicableWhenStaticRelationshipToOtherIs;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<ERelationship> ApplicableWhenStaticRelationshipToOtherIs;
    
    UPersonalRelationshipModifier();

    UFUNCTION(BlueprintNativeEvent)
    ERelationshipRelativeRank WhatsOthersRankComparedToMe(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeRankTowardsOther(ERelationshipRelativeRank RelativeRank);
    
    UFUNCTION(BlueprintCallable)
    void SetRelationshipTowardsOther(ERelationship Relationship);
    
    UFUNCTION(BlueprintCallable)
    void SetHostilityTowardsOther(ERelationshipHostility Hostility);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsApplicableFor(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintNativeEvent)
    ERelationship HowMuchDoILike(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintNativeEvent)
    ERelationshipHostility HowHostileAmIAgainst(const AGothicCharacterState* Me, const AGothicCharacterState* Other) const;
    
};

