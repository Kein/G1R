#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDoorType.h"
#include "DoorInteractiveExtraData.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType)
class G1R_API UDoorInteractiveExtraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_OpenMultiple;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumSteps;
    
    UPROPERTY(EditAnywhere)
    FName m_ConnectedTrigger;
    
    UPROPERTY(EditAnywhere)
    EDoorType m_DoorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_ObjectMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_DefaultStep;
    
    UPROPERTY(EditAnywhere)
    bool m_SaveData;
    
    UPROPERTY(EditAnywhere)
    bool m_NpcSaveData;
    
    UPROPERTY(EditAnywhere)
    int32 m_PuzzleTriggers;
    
    UPROPERTY(EditAnywhere)
    FName m_SendTrigger;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_PuzzleOrder;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> m_PuzzlePositions;
    
    UPROPERTY(EditAnywhere)
    bool m_GetAnimStep;
    
    UPROPERTY(EditAnywhere)
    FName m_LoadOnlyIfGlobal;
    
    UDoorInteractiveExtraData();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetMontage() const;
    
};

