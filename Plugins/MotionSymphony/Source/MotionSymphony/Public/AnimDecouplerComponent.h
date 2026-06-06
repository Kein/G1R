#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimDecouplerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONSYMPHONY_API UAnimDecouplerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName YawCurveName;
    
    UPROPERTY(EditAnywhere)
    bool bNegateCurve;
    
    UAnimDecouplerComponent(const FObjectInitializer& ObjectInitializer);

};

