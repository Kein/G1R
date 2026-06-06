#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GothicActorComponentInterface.h"
#include "GothicCharacterCapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicCharacterCapsuleComponent : public UCapsuleComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UGothicCharacterCapsuleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

