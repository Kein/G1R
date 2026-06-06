#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhysicsDefinition.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UPhysicsDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShouldBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Bounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BounceVelocityStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ThrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ThrowDistance;
    
    UPhysicsDefinition();

};

