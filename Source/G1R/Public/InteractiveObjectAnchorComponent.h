#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "EInteractionSpotEntryDirection.h"
#include "InteractiveObjectAnchorComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UInteractiveObjectAnchorComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    EInteractionSpotEntryDirection EntryDirection;
    
    UInteractiveObjectAnchorComponent(const FObjectInitializer& ObjectInitializer);

};

