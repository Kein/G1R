#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GothicFootstepsDataComponent.generated.h"

class UFootstepTag;
class UMaterialInterface;
class UPhysicMaterialsColor;
class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicFootstepsDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFootstepTag* FootstepTag;
    
    UPROPERTY(EditAnywhere)
    float DisappearFeetEffectTime;
    
    UPROPERTY(EditAnywhere)
    float AppearFeetEffectTime;
    
    UPROPERTY(EditAnywhere)
    UPhysicMaterialsColor* PhysicMaterialsColor;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> FootStepDecalMaterial;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> DirtFootStepDecalMaterial;
    
private:
    UPROPERTY()
    TOptional<FLinearColor> CurrentDirtColor;
    
public:
    UGothicFootstepsDataComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotifyStepOnMaterial(UPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintPure)
    FVector GetFootStepTextureSize(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* CreateDynamicFootstepMaterialInstance(UPhysicalMaterial* PhysicalMaterial) const;
    
};

