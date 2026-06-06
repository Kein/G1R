#pragma once
#include "CoreMinimal.h"
#include "ItemVisual.h"
#include "RodVisual.generated.h"

class ABaitVisual;
class UFishingWidget;
class USkeletalMeshComponent;

UCLASS()
class G1R_API ARodVisual : public AItemVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USkeletalMeshComponent* m_MeshComp;
    
    UPROPERTY()
    ABaitVisual* m_Bait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_BaitSocketName;
    
    UPROPERTY(Instanced)
    UFishingWidget* m_Widget;
    
public:
    ARodVisual(const FObjectInitializer& ObjectInitializer);

};

