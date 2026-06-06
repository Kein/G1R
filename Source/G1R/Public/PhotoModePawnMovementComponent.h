#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PhotoModePawnMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhotoModePawnMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UPhotoModePawnMovementComponent(const FObjectInitializer& ObjectInitializer);

};

