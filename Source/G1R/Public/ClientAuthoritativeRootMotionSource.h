#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "ClientAuthoritativeRootMotionSource.generated.h"

USTRUCT()
struct G1R_API FClientAuthoritativeRootMotionSource : public FRootMotionSource {
    GENERATED_BODY()
public:
    FClientAuthoritativeRootMotionSource();
};

