#pragma once
#include "CoreMinimal.h"
#include "EPuzzleEvent.h"
#include "PuzzleCreatureCounter.generated.h"

USTRUCT(BlueprintType)
struct FPuzzleCreatureCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RequiredKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_CreatureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DoorToOpenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SaveState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_CurrentKills;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_NumPlays;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPuzzleEvent m_PuzzleEvent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UClass* m_ExtraData;
    
    G1R_API FPuzzleCreatureCounter();
};

