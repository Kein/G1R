#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "GothicSaveGameFileMetadata.generated.h"

class UScriptStruct;

USTRUCT()
struct G1R_API FGothicSaveGameFileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<UScriptStruct*, FInstancedStruct> CustomPayload;
    
    FGothicSaveGameFileMetadata();
};

