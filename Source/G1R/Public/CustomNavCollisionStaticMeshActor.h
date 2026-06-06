#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "CustomNavCollisionStaticMeshActor.generated.h"

UCLASS()
class G1R_API ACustomNavCollisionStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ACustomNavCollisionStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

