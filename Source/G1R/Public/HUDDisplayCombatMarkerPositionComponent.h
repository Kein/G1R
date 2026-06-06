#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HUDDisplayCombatMarkerPositionComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UHUDDisplayCombatMarkerPositionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SockedToAttach;
    
    UHUDDisplayCombatMarkerPositionComponent(const FObjectInitializer& ObjectInitializer);

};

