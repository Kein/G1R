#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EPerceptionActivationType.h"
#include "PerceivableItemComponent.generated.h"

class AGothicCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UPerceivableItemComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPerceptionActivationType> ActivationType;
    
    UPROPERTY(EditAnywhere)
    float PerceptionRadius;
    
protected:
    UPROPERTY()
    TArray<AGothicCharacter*> SensedByCharacters;
    
public:
    UPerceivableItemComponent(const FObjectInitializer& ObjectInitializer);

};

