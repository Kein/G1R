#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TelekinesisItemMovement.generated.h"

UCLASS()
class G1R_API ATelekinesisItemMovement : public AActor {
    GENERATED_BODY()
public:
    ATelekinesisItemMovement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMovement_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMovement_Scriptable(AActor* Target, FName SocketName, float MovementSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetDistance_Scriptable();
    
};

