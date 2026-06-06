#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AnimatedBookSubsystem.generated.h"

class ABookCaptureActor;

UCLASS(BlueprintType)
class UAnimatedBookSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ABookCaptureActor* m_BookCaptureActor;
    
public:
    UAnimatedBookSubsystem();

    UFUNCTION(BlueprintCallable)
    ABookCaptureActor* SpawnBookCaptureActorIfNeeded();
    
    UFUNCTION(BlueprintPure)
    ABookCaptureActor* GetBookCaptureActor() const;
    
};

