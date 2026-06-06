#pragma once
#include "CoreMinimal.h"
#include "NpcTalentVirtualData.generated.h"

USTRUCT(BlueprintType)
struct FNpcTalentVirtualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_TalentName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_TalentLevel;
    
    G1R_API FNpcTalentVirtualData();
};

