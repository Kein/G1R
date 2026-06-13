#include "GothicSavegameMigrationScript.h"
#include "Templates/SubclassOf.h"

UGothicSavegameMigrationScript::UGothicSavegameMigrationScript() {
    this->ApplyToVersionsAfterIncluding = EGothicSaveGameVersion::Initial;
    this->ApplyToVersionsBefore = EGothicSaveGameVersion::LatestVersion;
    this->Order = 0;
}

void UGothicSavegameMigrationScript::SetItemCountForNPCsByUniqueName(FName UniqueName, TSubclassOf<UItemDefinition> ItemDefinitionm, int32 Count) {
}

bool UGothicSavegameMigrationScript::Migrate_Implementation(UGothicPersistentDataGame* SaveGame) const {
    return false;
}


