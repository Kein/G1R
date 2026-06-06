#pragma once
#include "CoreMinimal.h"
#include "IndexedMirrorPair.generated.h"

USTRUCT()
struct FIndexedMirrorPair {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 BoneIndex;
    
    UPROPERTY()
    int32 MirrorBoneIndex;
    
    MOTIONSYMPHONY_API FIndexedMirrorPair();
};

