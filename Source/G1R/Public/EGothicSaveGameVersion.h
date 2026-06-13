#pragma once
#include "CoreMinimal.h"
#include "EGothicSaveGameVersion.generated.h"

UENUM(BlueprintType)
enum class EGothicSaveGameVersion : uint8 {
    None,
    Initial,
    Hotfix2,
    VersionPlusOne,
    LatestVersion = Hotfix2,
};

