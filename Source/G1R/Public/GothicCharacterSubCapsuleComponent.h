#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "EStance.h"
#include "GothicCharacterSubCapsuleComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicCharacterSubCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_UsedForMovementSweep;
    
    UPROPERTY(EditAnywhere)
    bool m_UsedForDeformation;
    
    UPROPERTY(EditAnywhere)
    TArray<EStance> m_ActiveStances;
    
    UPROPERTY(EditAnywhere)
    bool m_ActivatedDuringAttacks;
    
    UPROPERTY(EditAnywhere)
    FName m_CustomCollisionProfile;
    
public:
    UGothicCharacterSubCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

