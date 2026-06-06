#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CombatTargetPointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UCombatTargetPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCombatTargetPointComponent(const FObjectInitializer& ObjectInitializer);

};

