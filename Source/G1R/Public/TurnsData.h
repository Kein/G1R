#pragma once
#include "CoreMinimal.h"
#include "DynamicMontage.h"
#include "EPivotTrigger.h"
#include "EWalkSpeed.h"
#include "GothicBaseConfig.h"
#include "QuickStops.h"
#include "StartTurnDirections.h"
#include "Templates/SubclassOf.h"
#include "TurnDirections.h"
#include "TurnsData.generated.h"

class UAnimMontage;
class UTurnOnSpotConfig;

UCLASS(BlueprintType, EditInlineNew)
class UTurnsData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDynamicMontage m_Pivot180;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_StartMoving90R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_StartMoving90L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_StartMoving180R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_StartMoving180L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, FTurnDirections> m_Pivots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, FStartTurnDirections> m_Starts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, FQuickStops> m_QuickStops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, FTurnDirections> m_PivotsCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, FStartTurnDirections> m_StartsCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, FQuickStops> m_QuickStopsCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CounterChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTurnOnSpotConfig> m_TurnOnSpotConfig;
    
public:
    UTurnsData();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetStartMoving90R() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetStartMoving90L() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetStartMoving180R() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetStartMoving180L() const;
    
    UFUNCTION(BlueprintPure)
    bool GetStartDirection(EWalkSpeed Speed, EPivotTrigger Direction, FDynamicMontage& Anim, bool Standing) const;
    
    UFUNCTION(BlueprintPure)
    bool GetQuickStops(EWalkSpeed Speed, bool isLeftFoot, FDynamicMontage& Montage, bool Standing) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPivotDirection(EWalkSpeed Speed, EPivotTrigger Direction, FDynamicMontage& Anim, bool Standing) const;
    
    UFUNCTION(BlueprintPure)
    FDynamicMontage GetPivot180() const;
    
};

