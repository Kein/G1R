#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "RegionTrait.generated.h"

class AGothicCharacterState;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew, Within=Actor)
class G1R_API URegionTrait : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<AGothicCharacterState*> CurrentlyHandledCharacters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bServerOnly;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bRequireLocalPlayer;
    
    UPROPERTY(AdvancedDisplay)
    bool bRequireNetworkAuthority;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bHandlePlayerCharacters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bHandleNonPlayerCharacters;
    
    URegionTrait();

    UFUNCTION(BlueprintPure)
    float GetDistanceToCollisionFromPoint(const FVector& Point) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BP_ShouldHandleCharacter(const AGothicCharacterState* CharacterState) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleHandleOwnerEndPlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleCharacterLeavingRegion(AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_HandleCharacterEnteringRegion(AGothicCharacterState* CharacterState);
    
};

