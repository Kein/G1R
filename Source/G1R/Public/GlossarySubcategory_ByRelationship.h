#pragma once
#include "CoreMinimal.h"
#include "ERelationship.h"
#include "GlossarySubcategory.h"
#include "GlossarySubcategory_ByRelationship.generated.h"

class AGothicCharacterState;
class AGothicPlayerState;

UCLASS(Abstract, Blueprintable)
class G1R_API UGlossarySubcategory_ByRelationship : public UGlossarySubcategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<ERelationship> m_AcceptedRelationships;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_IgnoreDeadActors;
    
public:
    UGlossarySubcategory_ByRelationship();

protected:
    UFUNCTION(BlueprintNativeEvent)
    ERelationship GetCombinedRelationshipAS(const AGothicCharacterState* _CharacterState, const AGothicPlayerState* _OwningPlayerState) const;
    
};

