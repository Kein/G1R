#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AimingAssistance.h"
#include "WeaponDefinition.h"
#include "ProjectileDefinition.generated.h"

class AActor;

UCLASS(EditInlineNew)
class G1R_API UProjectileDefinition : public UWeaponDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_Radius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_MovementEffect;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAimingAssistance m_AimingAssistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ArcParam;
    
private:
    UPROPERTY()
    AActor* m_CurrentTarget;
    
public:
    UProjectileDefinition();

    UFUNCTION(BlueprintCallable)
    static void SetDrawDebugLines(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAimingMinDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetAimingMaxTurnAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetAimingMaxDistance(float Distance);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool GetDrawDebugLines();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableAimingAssistance(bool Enable);
    
};

