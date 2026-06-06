#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AlkimiaBodyInstance.h"
#include "AlkimiaLightweightStaticMeshComponentProperties.h"
#include "AlkimiaLightweightDecorationComponent.generated.h"

class UAlkimiaLightweightDecorationComponent;
class UMaterialInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALKIMIALIGHTWEIGHTACTORS_API UAlkimiaLightweightDecorationComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAlkimiaLightweightStaticMeshComponentProperties> MeshProperties;
    
    UPROPERTY()
    TArray<FAlkimiaBodyInstance> MergedMinifiedBodyInstances;
    
    UPROPERTY()
    TArray<int32> NavObstacleStaticMeshes;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> UsedMaterials;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    TArray<UAlkimiaLightweightDecorationComponent*> SplitSubComponents;
    
    UAlkimiaLightweightDecorationComponent(const FObjectInitializer& ObjectInitializer);

};

