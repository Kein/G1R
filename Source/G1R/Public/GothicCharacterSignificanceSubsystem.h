#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GothicCharacterSignificanceSubsystem.generated.h"

class AGothicCharacterState;
class UObject;
class UTerritoryConfig;

UCLASS(BlueprintType, Config=Game)
class G1R_API UGothicCharacterSignificanceSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    FName MainPlayerUniqueName;
    
public:
    UGothicCharacterSignificanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveHideCharacterRequest(const UObject* Context, const AGothicCharacterState* CharacterToHide);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHideCharacterByUniqueNameRequest(const UObject* Context, FName CharacterUniqueName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHideAllCharactersRequest(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHideAllCharactersOfTerritoryRequest(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHideAllButMainPlayerRequest(const UObject* Context, const AGothicCharacterState* CharacterToHide);
    
    UFUNCTION(BlueprintCallable)
    void RemoveForceVisibilityCharacterRequest(const UObject* Context, const AGothicCharacterState* CharacterToHide);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllRequestsOfObject(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllForceVisibilityCharacterRequests(const UObject* Context);
    
    UFUNCTION(BlueprintPure)
    bool IsAllowedToBeVisible(const AGothicCharacterState* CharacterState) const;
    
    UFUNCTION(BlueprintCallable)
    void HideCharactersWithUniqueName(const UObject* Context, FName CharacterUniqueName);
    
    UFUNCTION(BlueprintCallable)
    void HideCharacter(const UObject* Context, const AGothicCharacterState* CharacterToHide);
    
    UFUNCTION(BlueprintCallable)
    void HideAllCharactersOfTerritory(const UObject* Context, TSubclassOf<UTerritoryConfig> TerritoryClass);
    
    UFUNCTION(BlueprintCallable)
    void HideAllCharactersOfSpeciesInTerritory(const UObject* Context, TSubclassOf<UTerritoryConfig> TerritoryClass, FGameplayTag Species);
    
    UFUNCTION(BlueprintCallable)
    void HideAllCharacters(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void HideAllButMainPlayer(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void ForceVisibilityCharacter(const UObject* Context, const AGothicCharacterState* CharacterToHide);
    
};

