#pragma once
#include "CoreMinimal.h"
#include "EFindPathType.generated.h"

UENUM()
enum class EFindPathType : int32 {
    WaynetOnly,
    NavMeshOnly,
    MetaPath,
};

