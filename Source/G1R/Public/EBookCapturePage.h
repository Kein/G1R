#pragma once
#include "CoreMinimal.h"
#include "EBookCapturePage.generated.h"

UENUM(BlueprintType)
enum class EBookCapturePage : uint8 {
    BOOK_COVER,
    BOOK_PAGE_LEFT,
    BOOK_PAGE_RIGHT,
    BOOK_PAGE_ANIMATING_LEFT,
    BOOK_PAGE_ANIMATING_RIGHT,
    BOOK_PAGE_COUNT,
};

