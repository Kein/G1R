#pragma once
#include "CoreMinimal.h"
#include "EStencilsUsage.h"
#include "GothicBaseConfig.h"
#include "OutlineStencilUsageData.h"
#include "OutlineSubsystemConfig.generated.h"

class UMaterialParameterCollection;
class UWorld;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UOutlineSubsystemConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineClosestAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineFarthestAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineClosestThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineFarthestThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineClosestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineFarthestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutlineFadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EStencilsUsage, FOutlineStencilUsageData> StencilOutlineData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> StencilParameterCollection;
    
public:
    UOutlineSubsystemConfig();

    UFUNCTION()
    void UpdateSimulationSystem(UWorld* World) const;
    
    UFUNCTION()
    void UpdateColorTable(UWorld* World);
    
    UFUNCTION()
    void SetEffectState(UWorld* World, bool State) const;
    
    UFUNCTION(BlueprintPure)
    float GetOutlineFadeTime() const;
    
    UFUNCTION()
    bool GetEffectState(UWorld* World) const;
    
};

