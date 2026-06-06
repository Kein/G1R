#include "CrimeMemorySubsystem.h"
#include "Templates/SubclassOf.h"

UCrimeMemorySubsystem::UCrimeMemorySubsystem() {
    this->DefaultDeleteTimeHours = 200.00f;
    this->SpreadMemoryTimeIntervalSeconds = 300.00f;
    this->SyncLocationMemoryTimeIntervalSeconds = 300.00f;
    this->MinAgeOfCrimeToSpreadToLocationMemoryInHours = 2.00f;
}

void UCrimeMemorySubsystem::SynchronizeCharacterMemoriesToSubguildLocations() {
}

void UCrimeMemorySubsystem::SyncCharacterMemoryWithLocation() {
}

bool UCrimeMemorySubsystem::SuppressRelativeCrime(const int32 RelativeCrimeID, AGothicCharacterState* Character) {
    return false;
}

void UCrimeMemorySubsystem::SpreadMemoriesThroughPathways() {
}

void UCrimeMemorySubsystem::ReplaceCharacterAreaTags(AGothicCharacterState* CharacterState, const FGameplayTagContainer& AreaTags) {
}

bool UCrimeMemorySubsystem::RemoveRelativeCrimeOnCharacter(const int32 RelativeCrimeID, AGothicCharacterState* Character) {
    return false;
}

bool UCrimeMemorySubsystem::RemoveLocationMemoryFromArea(const FGameplayTag GuildTag, const FGameplayTag LocationTag) {
    return false;
}

bool UCrimeMemorySubsystem::RemoveCrimeEntryFromLocationMemory(const int32 CrimeID, const FGameplayTag GuildTag, const FGameplayTag LocationTag) {
    return false;
}

bool UCrimeMemorySubsystem::RemoveCrime(const int32 CrimeID) {
    return false;
}

void UCrimeMemorySubsystem::RegisterRelativeCrimeEntryFromParameters(AGothicCharacterState* Instigator, AGothicCharacterState* Witness, const TArray<AGothicCharacterState*>& Victims, const FGameplayTagContainer& VictimGuilds, const int32 CrimeID, const FGameplayTag& CrimeType) {
}

void UCrimeMemorySubsystem::RegisterRelativeCrimeEntry(const FRelativeCrimeDataEntry& RelativeCrimeEntry) {
}

void UCrimeMemorySubsystem::RegisterLongtermMemoryTagForCrimeData(const FGameplayTagContainer& CrimeTypes, const FGameplayTag& AffectedGuild, const FGameplayTag& MemoryTag) {
}

void UCrimeMemorySubsystem::RegisterLocationMemoryPathway(const float& GameHoursUntilSpread, const FGameplayTag& StartArea, const FGameplayTag& StartGuild, const FGameplayTag& EndArea, const FGameplayTag& EndGuild) {
}

void UCrimeMemorySubsystem::RegisterLocationCrimeEntry(FGameplayTag LocationTag, FGameplayTag AssociatedGuild, EAreaBoundMemoryContainerType ContainerType) {
}

int32 UCrimeMemorySubsystem::RegisterCrime(AGothicCharacterState* Criminal, TArray<AGothicCharacterState*>& Victims, FGameplayTag CrimeType, FGameplayTag AreaTag, const FInGameTime& TimeCommited, const FGameplayTagContainer& VictimGuilds, const bool bIsForgiven, const ECrimeAffectedEntitySource& AffectedEntitySource, TSubclassOf<UItemDefinition> ItemDefinitionClass, TSubclassOf<UInteractiveObjectDefinition> InteractiveObjectDefinitionClass, AGothicCharacterState* TrueCriminal) {
    return 0;
}

bool UCrimeMemorySubsystem::GetRelativeCrimesOfCharacter(TArray<FRelativeCrimeDataEntry>& RelativeCrimes, AGothicCharacterState* Character) const {
    return false;
}

bool UCrimeMemorySubsystem::GetRelativeCrime(FRelativeCrimeDataEntry& RelativeCrimeEntryOutput, const int32 CrimeID, AGothicCharacterState* Character) const {
    return false;
}

TArray<FLocationMemoryCrimeDataEntry> UCrimeMemorySubsystem::GetLocationMemoriesOfArea(const FGameplayTag LocationTag) const {
    return TArray<FLocationMemoryCrimeDataEntry>();
}

bool UCrimeMemorySubsystem::GetLocationCrimeEntry(FLocationMemoryCrimeDataEntry& LocationMemoryEntryOutput, const FGameplayTag GuildTag, const FGameplayTag LocationTag) const {
    return false;
}

bool UCrimeMemorySubsystem::GetCrimeByID(FGlobalCrimeDataEntry& CrimeEntryOutput, const int32 CrimeID) const {
    return false;
}

TArray<int32> UCrimeMemorySubsystem::GetAllCrimesWithVictim(AGothicCharacterState* Character) const {
    return TArray<int32>();
}

TArray<int32> UCrimeMemorySubsystem::GetAllCrimesCommitedBy(const AGothicCharacterState* Character) const {
    return TArray<int32>();
}

TArray<int32> UCrimeMemorySubsystem::GetAllCrimesCommitedBefore(const FInGameTime& Time) const {
    return TArray<int32>();
}

TArray<int32> UCrimeMemorySubsystem::GetAllCrimesCommitedAfter(const FInGameTime& Time) const {
    return TArray<int32>();
}

UCrimeMemorySubsystem* UCrimeMemorySubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool UCrimeMemorySubsystem::ForgiveCrime(const int32 CrimeID) {
    return false;
}

void UCrimeMemorySubsystem::ForceSyncAndRestartTimers() {
}

TArray<int32> UCrimeMemorySubsystem::FindGlobalCrimesWithCrimeTypeAndParticipants(const FGameplayTag& CrimeType, const FName CriminalID, const TArray<FName>& Victims) const {
    return TArray<int32>();
}

void UCrimeMemorySubsystem::DrawPathwayImGuiIfPossible() {
}

void UCrimeMemorySubsystem::DrawLocationImGuiIfPossible() {
}

void UCrimeMemorySubsystem::CreateRelativeMemoriesToCrime(AGothicCharacterState* Witness, const int32 CrimeID, const ERelativeCrimeOrigin& Origin) {
}

FRelativeCrimeDataEntry UCrimeMemorySubsystem::ConvertCrimeToRelativeMemoryWithoutRemembering(AGothicCharacterState* Witness, const int32 CrimeID) const {
    return FRelativeCrimeDataEntry{};
}

bool UCrimeMemorySubsystem::CharacterHasRelativeCrime(AGothicCharacterState* Character, const int32 CrimeID) const {
    return false;
}

bool UCrimeMemorySubsystem::ChangeCrimeTimeCommitted(const int32 CrimeID, const FInGameTime& NewTime) {
    return false;
}

void UCrimeMemorySubsystem::AddCharacterAreaTags(AGothicCharacterState* CharacterState, const FGameplayTagContainer& AreaTags) {
}


