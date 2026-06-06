#pragma once
#include "CoreMinimal.h"
#include "NavModifierVolume.h"
#include "NavAreaActor.generated.h"

UCLASS()
class G1R_API ANavAreaActor : public ANavModifierVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool m_IsAutoGen;
    
public:
    ANavAreaActor(const FObjectInitializer& ObjectInitializer);

};

