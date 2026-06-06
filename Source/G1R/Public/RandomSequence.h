#pragma once
#include "CoreMinimal.h"
#include "RandomSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRandomSequence {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UAnimSequence> m_Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_LoopsBeforeRemove;
    
    UPROPERTY()
    float m_CurrentChance;
    
    G1R_API FRandomSequence();
};

