#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemAnimConfig.h"
#include "Templates/SubclassOf.h"
#include "WeaponItemAnimConfig.generated.h"

class UAnimMontage;
class UComboAttackConfig;
class UExecutionData;
class UTauntData;

UCLASS(Abstract, EditInlineNew)
class G1R_API UWeaponItemAnimConfig : public UItemAnimConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UComboAttackConfig>> m_Attacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_BlockMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RootMotionIncreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotateSpeedMagnetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotateSpeedMagnetAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_IntialRotateMagnetMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotateSpeedCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackRotateSpeedManualReorient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotateSpeedReorient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTauntData> m_TauntData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UExecutionData> m_ExecutionData;
    
public:
    UWeaponItemAnimConfig();

    UFUNCTION(BlueprintPure)
    UTauntData* GetTauntData() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotateSpeedReorient() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotateSpeedMagnetPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotateSpeedMagnetAI() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotateSpeedCharge() const;
    
    UFUNCTION(BlueprintPure)
    float GetRootMotionIncreaseRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetIntialRotateMagnetMaxAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetAttackRotateSpeedManualReorient() const;
    
};

