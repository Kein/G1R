#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DecalActor.h"
#include "GothicBloodDecal.generated.h"

class UCanvasRenderTarget2D;
class UMaterialInstanceDynamic;

UCLASS()
class G1R_API AGothicBloodDecal : public ADecalActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCanvasRenderTarget2D* m_CanvasRenderTarget2D;
    
    UPROPERTY()
    FVector M_Center;
    
    UPROPERTY()
    FVector m_MinPoint;
    
    UPROPERTY()
    FVector m_MaxPoint;
    
    UPROPERTY()
    FBox m_Box;
    
protected:
    UPROPERTY()
    UMaterialInstanceDynamic* m_MaterialInstanceDynamic;
    
public:
    AGothicBloodDecal(const FObjectInitializer& ObjectInitializer);

};

