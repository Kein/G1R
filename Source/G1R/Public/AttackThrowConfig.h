#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackConfig.h"
#include "Templates/SubclassOf.h"
#include "AttackThrowConfig.generated.h"

class UAnimMontage;
class UItemDefinition;

UCLASS(Abstract)
class G1R_API UAttackThrowConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArrowGravityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ProjectileSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ProjectileSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_ProjectileRotator;
    
public:
    UAttackThrowConfig();

    UFUNCTION(BlueprintPure)
    float GetProjectileSpeedMin() const;
    
    UFUNCTION(BlueprintPure)
    float GetProjectileSpeedMax() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetProjectileRotator() const;
    
    UFUNCTION(BlueprintPure)
    UItemDefinition* GetProjectile() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAttackMontage() const;
    
    UFUNCTION(BlueprintPure)
    float GetArrowGravityModifier() const;
    
};

