#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "LocomotionSequencesData.generated.h"

class UAnimSequence;

UCLASS(BlueprintType, EditInlineNew)
class ULocomotionSequencesData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_CrouchToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_IdleToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_AimingCrouchToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_AimingIdleToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_TurnIP90L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_TurnIP90R;
    
    ULocomotionSequencesData();

    UFUNCTION(BlueprintPure)
    UAnimSequence* GetTurnIP90R();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetTurnIP90L();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetIdleToCrouch();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetCrouchToIdle();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetAimingIdleToCrouch();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetAimingCrouchToIdle();
    
};

