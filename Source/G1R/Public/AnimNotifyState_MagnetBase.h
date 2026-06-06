#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_Base.h"
#include "EMagnetConfig.h"
#include "Templates/SubclassOf.h"
#include "AnimNotifyState_MagnetBase.generated.h"

class UAttackMeleeConfig;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UAnimNotifyState_MagnetBase : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_DamageBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMagnetConfig m_MagnetConfigType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_CoreBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DamageNotifyIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_DamagePosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_WeaponDirection;
    
    UPROPERTY(EditAnywhere)
    FString m_HitCollisionName;
    
    UPROPERTY(EditAnywhere, Transient)
    TSubclassOf<UAttackMeleeConfig> m_DebugConfigClass;
    
    UAnimNotifyState_MagnetBase();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMagnetConfigType(EMagnetConfig NewMagnetConfigType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDamageBone(FName DamageBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCoreBone(FName coreBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    EMagnetConfig GetMagnetConfigType() const;
    
};

