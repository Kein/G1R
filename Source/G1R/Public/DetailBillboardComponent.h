#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BillboardComponent.h"
#include "DetailBillboardComponent.generated.h"

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UDetailBillboardComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor ColorTint;
    
    UDetailBillboardComponent(const FObjectInitializer& ObjectInitializer);

};

