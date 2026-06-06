#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ClockTime.h"
#include "EAreaBoundMemoryContainerType.h"
#include "ECrimeAffectedEntitySource.h"
#include "ERelativeCrimeOrigin.h"
#include "GlobalCrimeDataEntry.h"
#include "InGameTime.h"
#include "LocationMemoryCrimeDataEntry.h"
#include "RelativeCrimeDataEntry.h"
#include "Templates/SubclassOf.h"
#include "CrimeMemorySubsystem.generated.h"

class AGothicCharacterState;
class UCrimeMemorySubsystem;
class UInteractiveObjectDefinition;
class UItemDefinition;
class UObject;

UCLASS(BlueprintType)
class G1R_API UCrimeMemorySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> CrimeTypeTagToDeleteTimeInHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultDeleteTimeHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer CrimeTypesToNeverSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer CrimeTypesToNeverSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer CrimeTypesToNotSaveWhenForgiven;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer CrimeTypesForReactionVoicelines;
    
    UPROPERTY()
    TMap<AGothicCharacterState*, FGameplayTagContainer> CharacterToAreaTags;
    
    UPROPERTY(EditAnywhere)
    float SpreadMemoryTimeIntervalSeconds;
    
    UPROPERTY(EditAnywhere)
    float SyncLocationMemoryTimeIntervalSeconds;
    
    UPROPERTY(EditAnywhere)
    float MinAgeOfCrimeToSpreadToLocationMemoryInHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SpeciesSpecificCrimeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer SpeciesToIncludeForMemorySpreadOfSpeciesExclusiveCrimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FName> CharacterGlobalIDsExcludedFromSpeciesSelection;
    
    UPROPERTY(EditAnywhere)
    TArray<FClockTime> TimesToSyncLocationMemory;
    
    UPROPERTY()
    TMap<AGothicCharacterState*, FDateTime> CharacterToLastLocationMemorySyncTime;
    
public:
    UCrimeMemorySubsystem();

protected:
    UFUNCTION()
    void SynchronizeCharacterMemoriesToSubguildLocations();
    
    UFUNCTION()
    void SyncCharacterMemoryWithLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    bool SuppressRelativeCrime(const int32 RelativeCrimeID, AGothicCharacterState* Character);
    
protected:
    UFUNCTION()
    void SpreadMemoriesThroughPathways();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReplaceCharacterAreaTags(AGothicCharacterState* CharacterState, const FGameplayTagContainer& AreaTags);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveRelativeCrimeOnCharacter(const int32 RelativeCrimeID, AGothicCharacterState* Character);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveLocationMemoryFromArea(const FGameplayTag GuildTag, const FGameplayTag LocationTag);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCrimeEntryFromLocationMemory(const int32 CrimeID, const FGameplayTag GuildTag, const FGameplayTag LocationTag);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCrime(const int32 CrimeID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRelativeCrimeEntryFromParameters(AGothicCharacterState* Instigator, AGothicCharacterState* Witness, const TArray<AGothicCharacterState*>& Victims, const FGameplayTagContainer& VictimGuilds, const int32 CrimeID, const FGameplayTag& CrimeType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRelativeCrimeEntry(const FRelativeCrimeDataEntry& RelativeCrimeEntry);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLongtermMemoryTagForCrimeData(const FGameplayTagContainer& CrimeTypes, const FGameplayTag& AffectedGuild, const FGameplayTag& MemoryTag);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLocationMemoryPathway(const float& GameHoursUntilSpread, const FGameplayTag& StartArea, const FGameplayTag& StartGuild, const FGameplayTag& EndArea, const FGameplayTag& EndGuild);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLocationCrimeEntry(FGameplayTag LocationTag, FGameplayTag AssociatedGuild, EAreaBoundMemoryContainerType ContainerType);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterCrime(AGothicCharacterState* Criminal, TArray<AGothicCharacterState*>& Victims, FGameplayTag CrimeType, FGameplayTag AreaTag, const FInGameTime& TimeCommited, const FGameplayTagContainer& VictimGuilds, const bool bIsForgiven, const ECrimeAffectedEntitySource& AffectedEntitySource, TSubclassOf<UItemDefinition> ItemDefinitionClass, TSubclassOf<UInteractiveObjectDefinition> InteractiveObjectDefinitionClass, AGothicCharacterState* TrueCriminal);
    
    UFUNCTION(BlueprintPure)
    bool GetRelativeCrimesOfCharacter(TArray<FRelativeCrimeDataEntry>& RelativeCrimes, AGothicCharacterState* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool GetRelativeCrime(FRelativeCrimeDataEntry& RelativeCrimeEntryOutput, const int32 CrimeID, AGothicCharacterState* Character) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FLocationMemoryCrimeDataEntry> GetLocationMemoriesOfArea(const FGameplayTag LocationTag) const;
    
    UFUNCTION(BlueprintPure)
    bool GetLocationCrimeEntry(FLocationMemoryCrimeDataEntry& LocationMemoryEntryOutput, const FGameplayTag GuildTag, const FGameplayTag LocationTag) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCrimeByID(FGlobalCrimeDataEntry& CrimeEntryOutput, const int32 CrimeID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetAllCrimesWithVictim(AGothicCharacterState* Character) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetAllCrimesCommitedBy(const AGothicCharacterState* Character) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetAllCrimesCommitedBefore(const FInGameTime& Time) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetAllCrimesCommitedAfter(const FInGameTime& Time) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCrimeMemorySubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool ForgiveCrime(const int32 CrimeID);
    
    UFUNCTION(BlueprintCallable)
    void ForceSyncAndRestartTimers();
    
    UFUNCTION(BlueprintPure)
    TArray<int32> FindGlobalCrimesWithCrimeTypeAndParticipants(const FGameplayTag& CrimeType, const FName CriminalID, const TArray<FName>& Victims) const;
    
    UFUNCTION(BlueprintCallable)
    void DrawPathwayImGuiIfPossible();
    
    UFUNCTION(BlueprintCallable)
    void DrawLocationImGuiIfPossible();
    
    UFUNCTION(BlueprintCallable)
    void CreateRelativeMemoriesToCrime(AGothicCharacterState* Witness, const int32 CrimeID, const ERelativeCrimeOrigin& Origin);
    
    UFUNCTION(BlueprintPure)
    FRelativeCrimeDataEntry ConvertCrimeToRelativeMemoryWithoutRemembering(AGothicCharacterState* Witness, const int32 CrimeID) const;
    
    UFUNCTION(BlueprintPure)
    bool CharacterHasRelativeCrime(AGothicCharacterState* Character, const int32 CrimeID) const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCrimeTimeCommitted(const int32 CrimeID, const FInGameTime& NewTime);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterAreaTags(AGothicCharacterState* CharacterState, const FGameplayTagContainer& AreaTags);
    
};

