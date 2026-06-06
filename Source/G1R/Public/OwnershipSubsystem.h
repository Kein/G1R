#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EOwnershipRelationFlags.h"
#include "ItemVirtualData.h"
#include "OwnershipSettings.h"
#include "PersonalAreaOwnershipSettings.h"
#include "PersonalItemOwnershipSettings.h"
#include "Templates/SubclassOf.h"
#include "OwnershipSubsystem.generated.h"

class AGothicCharacterState;
class AInteractiveObjectActor;
class AItemVisualWorld;
class UGuildAreaOwnershipModifier;
class UItemDefinition;
class UObject;

UCLASS(BlueprintType)
class G1R_API UOwnershipSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UGuildAreaOwnershipModifier*> GuildAreaOwnershipModifiers;
    
public:
    UOwnershipSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetPersonalItemOwnershipForContext(AGothicCharacterState* CharacterState, const UObject* Context, const FPersonalItemOwnershipSettings& Ownership);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonalAreaOwnershipForContext(AGothicCharacterState* CharacterState, const UObject* Context, const FPersonalAreaOwnershipSettings& Ownership);
    
    UFUNCTION(BlueprintCallable)
    void RemovePersonalItemOwnershipOfContext(AGothicCharacterState* CharacterState, const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void RemovePersonalAreaOwnershipOfContext(AGothicCharacterState* CharacterState, const UObject* Context);
    
    UFUNCTION(BlueprintPure)
    bool IsGuildOwnerOfArea(const FGameplayTag& Guild, const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterPersonalOwnerOfItemVisual(const AGothicCharacterState* CharacterState, const AItemVisualWorld* ItemVisualWorld) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterPersonalOwnerOfItem(const AGothicCharacterState* CharacterState, const FItemVirtualData& ItemData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterPersonalOwnerOfArea(const AGothicCharacterState* CharacterState, const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAreaOwnedByAnyPerson(const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAreaOwnedByAnyone(const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAreaOwnedByAnyGuild(const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetPersonalOwnersOfItemType(TSubclassOf<UItemDefinition> ItemDefinition, const FOwnershipSettings& ItemOwnershipSettings) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetPersonalOwnersFromConfig(const FOwnershipSettings& ItemOwnershipSettings) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetOwningGuildsOfItemType(TSubclassOf<UItemDefinition> ItemDefinition, const FOwnershipSettings& ItemOwnershipSettings) const;
    
    UFUNCTION(BlueprintPure)
    EOwnershipRelationFlags GetOwnershipRelationOfItemVirtualData(const AGothicCharacterState* CharacterState, const FItemVirtualData& Item) const;
    
    UFUNCTION(BlueprintPure)
    EOwnershipRelationFlags GetOwnershipRelationOfItemType(const AGothicCharacterState* CharacterState, TSubclassOf<UItemDefinition> ItemDefinition, const FOwnershipSettings& ItemOwnershipSettings) const;
    
    UFUNCTION(BlueprintPure)
    EOwnershipRelationFlags GetOwnershipRelationOfItemInWorld(const AGothicCharacterState* CharacterState, const AItemVisualWorld* Item) const;
    
    UFUNCTION(BlueprintPure)
    EOwnershipRelationFlags GetOwnershipRelationOfInteractiveObjectInWorld(const AGothicCharacterState* CharacterState, const AInteractiveObjectActor* InteractiveObject) const;
    
    UFUNCTION(BlueprintPure)
    EOwnershipRelationFlags GetOwnershipRelationOfCharacter(const AGothicCharacterState* CharacterState, const FOwnershipSettings& OwnershipSettings) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetGuildOwnersFromConfig(const FOwnershipSettings& ItemOwnershipSettings) const;
    
    UFUNCTION(BlueprintPure)
    EOwnershipRelationFlags GetCharacterOwnershipOfArea(const AGothicCharacterState* CharacterState, const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetAllPersonalOwnersOfItemVisual(const AItemVisualWorld* ItemVisualWorld) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetAllPersonalOwnersOfItem(const FItemVirtualData& ItemData) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetAllPersonalOwnersOfInteractiveObject(const AInteractiveObjectActor* InteractiveObjectActor) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetAllPersonalOwnersOfArea(const FGameplayTag& Area) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAllGuildsOwningArea(const FGameplayTag& Area) const;
    
};

