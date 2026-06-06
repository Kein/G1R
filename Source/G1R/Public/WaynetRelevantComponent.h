#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WaynetRelevantInterface.h"
#include "WaynetRelevantComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UWaynetRelevantComponent : public USceneComponent, public IWaynetRelevantInterface {
    GENERATED_BODY()
public:
    UWaynetRelevantComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

