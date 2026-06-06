#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Templates/SubclassOf.h"
#include "FastActorOverlapBoxComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UFastActorOverlapBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BudgetWorkload;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TSet<AActor*> FastOverlappingActors;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> FastOverlapActorClass;
    
    UFastActorOverlapBoxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOverlapsFast();
    
    UFUNCTION(BlueprintPure)
    bool IsFastOverlappingActor(const AActor* OtherActor) const;
    
};

