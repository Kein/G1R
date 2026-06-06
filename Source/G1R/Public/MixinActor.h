#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MixinActor.generated.h"

class AActor;

UCLASS()
class G1R_API UMixinActor : public UObject {
    GENERATED_BODY()
public:
    UMixinActor();

    UFUNCTION()
    static float GetSimpleCollisionRadius(const AActor* This);
    
    UFUNCTION()
    static float GetSimpleCollisionHalfHeight(const AActor* This);
    
    UFUNCTION()
    static FVector GetSimpleCollisionCylinderExtent(const AActor* This);
    
    UFUNCTION()
    static void GetSimpleCollisionCylinder(const AActor* This, float& CollisionRadius, float& CollisionHalfHeight);
    
    UFUNCTION()
    static void GetComponentsBoundingCylinder(const AActor* This, float& CollisionRadius, float& CollisionHalfHeight, bool bNonColliding, bool bIncludeFromChildActors);
    
};

