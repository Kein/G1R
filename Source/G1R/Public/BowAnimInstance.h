#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "BowAnimInstance.generated.h"

class AArcheryWeaponVisual;
class AGothicCharacter;
class UAbilitySystemComponent;
class UArcheryComponent;

UCLASS(NonTransient)
class G1R_API UBowAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float Enable_BowString_Correction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FTransform m_RightHandTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float m_Completion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_IsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_IsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_IsReloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_IsReloading;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(Instanced)
    UArcheryComponent* m_ArcheryComponent;
    
    UPROPERTY()
    AArcheryWeaponVisual* m_Weapon;
    
public:
    UBowAnimInstance();

};

