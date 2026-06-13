#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Engine/HitResult.h"
#include "CheckElementsInsideVolume.generated.h"

class Actor;
class AItemVisualWorld;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS()
class G1R_API ACheckElementsInsideVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBoxComponent* Box;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, int32> ElementsExpected;
    
    UPROPERTY(Transient)
    TArray<AItemVisualWorld*> ElementsInside;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TMap<FString, int32> AccumulatedCounts;
    
    ACheckElementsInsideVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void OnValid();
    
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

