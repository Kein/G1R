#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ActorMapBoundingBox.generated.h"

UCLASS()
class G1R_API AActorMapBoundingBox : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ZoneTagMap;
    
public:
    AActorMapBoundingBox(const FObjectInitializer& ObjectInitializer);

};

