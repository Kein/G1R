#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorIndoorDetectionTestActor.generated.h"

class UIndoorDetectionComponent;

UCLASS()
class AEditorIndoorDetectionTestActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUpdateOnTick;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIndoorDetectionComponent* IndoorDetectionComponent;
    
public:
    AEditorIndoorDetectionTestActor(const FObjectInitializer& ObjectInitializer);

};

