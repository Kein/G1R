#pragma once
#include "CoreMinimal.h"
#include "ECombatRole.h"
#include "GothicAIGroup.h"
#include "AIGroup_Combat_Base.generated.h"

class AGothicCharacter;

UCLASS(Abstract)
class G1R_API UAIGroup_Combat_Base : public UGothicAIGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AGothicCharacter* WeakestMember;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<AGothicCharacter*, float> StrengthRatioOfGroupMembers;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<AGothicCharacter*, float> FitnessOfGroupMembers;
    
    UPROPERTY(BlueprintReadOnly)
    float HighestStrengthInGroup;
    
    UPROPERTY(BlueprintReadOnly)
    float HighestLevelInGroup;
    
    UPROPERTY(BlueprintReadOnly)
    float HighestHealthInGroup;
    
    UAIGroup_Combat_Base();

    UFUNCTION(BlueprintCallable)
    void ScheduleFitnessUpdates();
    
    UFUNCTION(BlueprintCallable)
    void ScheduleAvailableRoleUpdates();
    
    UFUNCTION(BlueprintPure)
    float GetStrengthRatioOf(AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    float GetFitnessOf(AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ECombatRole> GetAvailableRolesOf(AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<ECombatRole> GatherAvailableRolesOf(AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRecalculateGroupMemberStrengths();
    
    UFUNCTION(BlueprintImplementableEvent)
    float CalcStrengthRatioOf(AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float CalcFitnessOf(AGothicCharacter* Character) const;
    
};

