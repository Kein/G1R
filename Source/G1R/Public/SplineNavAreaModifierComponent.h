#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Templates/SubclassOf.h"
#include "SplineNavAreaModifierComponent.generated.h"

class UNavArea;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineNavAreaModifierComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StepSize;
    
    UPROPERTY(EditAnywhere)
    float SimplifyIfAngleDifferenceIsLessThan;
    
    UPROPERTY(EditAnywhere)
    float SimplifyIfScaleDifferenceIsLessThan;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> NavArea;
    
    USplineNavAreaModifierComponent(const FObjectInitializer& ObjectInitializer);

};

