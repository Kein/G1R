#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "NPCHealthBarComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UNPCHealthBarComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool m_WidgetVisibility;
    
    UPROPERTY()
    bool m_CharacterTargeted;
    
public:
    UNPCHealthBarComponent(const FObjectInitializer& ObjectInitializer);

};

