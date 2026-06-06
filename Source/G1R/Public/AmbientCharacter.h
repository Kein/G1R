#pragma once
#include "CoreMinimal.h"
#include "ClientAuthoritativeCharacter.h"
#include "AmbientCharacter.generated.h"

UCLASS(Transient)
class G1R_API AAmbientCharacter : public AClientAuthoritativeCharacter {
    GENERATED_BODY()
public:
    AAmbientCharacter(const FObjectInitializer& ObjectInitializer);

};

