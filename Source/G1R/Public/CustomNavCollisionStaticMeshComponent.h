#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "CustomNavCollisionStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UCustomNavCollisionStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bExportNavigableGeometryEvenIfNotCollidable;
    
    UPROPERTY(EditAnywhere)
    bool bUseCustomNavCollisionPawnChannel;
    
    UPROPERTY(EditAnywhere)
    FName CustomCollisionProfileName;
    
public:
    UCustomNavCollisionStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

