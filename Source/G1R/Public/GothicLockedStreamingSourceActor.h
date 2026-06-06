#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GothicLockedStreamingSourceActor.generated.h"

class USphereComponent;

UCLASS()
class G1R_API AGothicLockedStreamingSourceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> AffectedGrids;
    
    UPROPERTY(EditAnywhere)
    bool bShouldBlockOnSlowLoading;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* DefaultStreamingSource;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USphereComponent* OuterShapeComponent;
    
    AGothicLockedStreamingSourceActor(const FObjectInitializer& ObjectInitializer);

};

