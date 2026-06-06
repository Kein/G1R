#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ClientAuthoritativeMoveData.h"
#include "ClientAuthoritativeCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UClientAuthoritativeCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FClientAuthoritativeMoveData ServerLatestMoveData;
    
public:
    UClientAuthoritativeCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

