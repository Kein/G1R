#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RelationshipModifier.generated.h"

UCLASS(Abstract)
class G1R_API URelationshipModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsGlobalModifierClass;
    
    URelationshipModifier();

};

