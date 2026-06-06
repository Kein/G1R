#pragma once
#include "CoreMinimal.h"
#include "GothicGenericMagicComponent.h"
#include "TelekinesisVisualsComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UTelekinesisVisualsComponent : public UGothicGenericMagicComponent {
    GENERATED_BODY()
public:
    UTelekinesisVisualsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnStart(const AActor* Caster, const UMeshComponent* targetMesh);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnd();
    
};

