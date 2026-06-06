#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicWaterVolumeVectorFieldCell.h"
#include "GothicWaterVolumeVectorFieldComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicWaterVolumeVectorFieldComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    float m_CellSize;
    
    UPROPERTY()
    TArray<FGothicWaterVolumeVectorFieldCell> m_Cells;
    
    UPROPERTY()
    TArray<int32> m_TopOnlyCellIndices;
    
public:
    UGothicWaterVolumeVectorFieldComponent(const FObjectInitializer& ObjectInitializer);

};

