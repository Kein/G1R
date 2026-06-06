#pragma once
#include "CoreMinimal.h"
#include "ArcheryAccuracyParams.h"
#include "Templates/SubclassOf.h"
#include "WeaponDefinition.h"
#include "WeaponArcheryDefinition.generated.h"

class UAnimInstance;
class UFeedbackData;
class UItemDefinition;
class UMaterialInterface;

UCLASS(Abstract, EditInlineNew)
class G1R_API UWeaponArcheryDefinition : public UWeaponDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArrowGravityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FArcheryAccuracyParams m_AimingAccuracyParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FArcheryAccuracyParams m_QuickAccuracyParams;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemDefinition> m_ArrowDefinition;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UAnimInstance> m_AnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UFeedbackData> m_FeedbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> m_QuiverMaterial;
    
    UWeaponArcheryDefinition();

    UFUNCTION(BlueprintPure)
    UFeedbackData* GetFeedbackControl() const;
    
};

