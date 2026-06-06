#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWinchState.h"
#include "TriggerExtraData.generated.h"

UCLASS(Abstract)
class G1R_API UTriggerExtraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EWinchState, FName> m_StateName;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumSteps;
    
    UPROPERTY(EditAnywhere)
    int32 m_DefaultStep;
    
    UPROPERTY(EditAnywhere)
    bool m_BackToStart;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_SendTrigger;
    
    UPROPERTY(EditAnywhere)
    bool m_Loop;
    
    UPROPERTY(EditAnywhere)
    bool m_SaveData;
    
    UPROPERTY(EditAnywhere)
    FName m_DisableOnEvent;
    
    UPROPERTY(EditAnywhere)
    bool m_InverseInput;
    
    UPROPERTY(EditAnywhere)
    FName m_CallFunctionStart;
    
    UPROPERTY(EditAnywhere)
    FName m_CallFunctionEnd;
    
    UTriggerExtraData();

};

