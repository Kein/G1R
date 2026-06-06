#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CrosshairInterface.h"
#include "ItemVisual.h"
#include "SpellItemVisual.generated.h"

UCLASS()
class G1R_API ASpellItemVisual : public AItemVisual, public ICrosshairInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_MagicVFXColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MagicVFXIntensity;
    
public:
    ASpellItemVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMagicVFXColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetMagicIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetMagicVfxColor() const;
    
    UFUNCTION(BlueprintPure)
    float GetMagicIntensity() const;
    

    // Fix for true pure virtual functions not being implemented
};

