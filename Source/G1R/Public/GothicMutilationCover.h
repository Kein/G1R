#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GothicMutilationCover.generated.h"

class UPhysicsAsset;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicMutilationCover : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* m_AssociatedPhysicAsset;
    
    UGothicMutilationCover(const FObjectInitializer& ObjectInitializer);

};

