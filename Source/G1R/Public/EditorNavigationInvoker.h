#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorNavigationInvoker.generated.h"

class UGothicNavigationInvokerComponent;
class USphereComponent;

UCLASS()
class G1R_API AEditorNavigationInvoker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGothicNavigationInvokerComponent* Invoker;
    
    UPROPERTY(Instanced)
    USphereComponent* SphereComponent;
    
    AEditorNavigationInvoker(const FObjectInitializer& ObjectInitializer);

};

