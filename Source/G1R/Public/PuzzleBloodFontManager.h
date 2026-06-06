#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "EBloodFontState.h"
#include "PuzzleBloodFontManager.generated.h"

class AInteractiveObjectActor;

UCLASS()
class G1R_API APuzzleBloodFontManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_StartPuzzleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SwitchName_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SwitchName_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SwitchName_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBloodFontState m_FontState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBloodFontState m_FontStateOld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AInteractiveObjectActor* m_BloodPuzzle03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AInteractiveObjectActor* m_BloodPuzzle02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AInteractiveObjectActor* m_BloodPuzzle01;
    
protected:
    UPROPERTY()
    TArray<FGameplayMessageListenerHandle> m_Listeners;
    
public:
    APuzzleBloodFontManager(const FObjectInitializer& ObjectInitializer);

};

