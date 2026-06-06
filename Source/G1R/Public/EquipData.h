#pragma once
#include "CoreMinimal.h"
#include "EHoldsterLocation.h"
#include "EStance.h"
#include "EquipMontage.h"
#include "GothicBaseConfig.h"
#include "PickAndEquipMontage.h"
#include "EquipData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType, EditInlineNew)
class UEquipData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEquipMontage> m_EquipMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEquipMontage> m_UnequipMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEquipMontage> m_DropAndEquipMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEquipMontage> m_DropMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEquipMontage> m_DropMontagesBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPickAndEquipMontage> m_PickAndEquipMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EHoldsterLocation, FName> m_SocketDrawName;
    
public:
    UEquipData();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetUnequipMontage(EStance stance, EHoldsterLocation HoldsterLocation) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSocketDraw(EHoldsterLocation HoldsterLocation) const;
    
    UFUNCTION(BlueprintPure)
    FName GetSocket() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetPickAndEquipMontage(FName Height, EStance stance, EHoldsterLocation HoldsterLocation) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDropMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool DropBackwards) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetDropAndEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation) const;
    
};

