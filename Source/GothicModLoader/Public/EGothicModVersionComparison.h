#pragma once
#include "CoreMinimal.h"
#include "EGothicModVersionComparison.generated.h"

UENUM()
enum class EGothicModVersionComparison : int32 {
    Less,
    LessEqual,
    Equal,
    Greater,
    GreaterEqual,
    NotEqual,
};

