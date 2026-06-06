#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "GothicNavModifierComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UGothicNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

