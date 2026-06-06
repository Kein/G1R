#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LinkedAnimInstance.h"
#include "BipedMagicAnimInstance.generated.h"

UCLASS(NonTransient)
class G1R_API UBipedMagicAnimInstance : public ULinkedAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_Channeling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector2D m_SpellPitchLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector2D m_SpellYawLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_IsAimingLaunchingSpell;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_IsFirebolt;
    
public:
    UBipedMagicAnimInstance();

};

