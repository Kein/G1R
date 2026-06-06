#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayObjectWithEditorIcon.generated.h"

class USceneComponent;

UCLASS(Abstract)
class G1R_API AGameplayObjectWithEditorIcon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USceneComponent* m_SceneComponent;
    
public:
    AGameplayObjectWithEditorIcon(const FObjectInitializer& ObjectInitializer);

};

