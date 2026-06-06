#pragma once
#include "CoreMinimal.h"
#include "EGothicModLoadOrder.generated.h"

UENUM()
enum class EGothicModLoadOrder : int32 {
    First,
    Early,
    Normal,
    Late,
    Last,
};

