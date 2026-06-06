#pragma once
#include "CoreMinimal.h"
#include "GlossarySubcategory.h"
#include "GlossarySubcategory_ByAliveState.generated.h"

UCLASS(Abstract)
class G1R_API UGlossarySubcategory_ByAliveState : public UGlossarySubcategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_IsCharacterAlive;
    
public:
    UGlossarySubcategory_ByAliveState();

};

