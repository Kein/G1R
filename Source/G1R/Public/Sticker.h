#pragma once
#include "CoreMinimal.h"
#include "Sticker.generated.h"

USTRUCT(BlueprintType)
struct FSticker {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_Texture;
    
    G1R_API FSticker();
};

