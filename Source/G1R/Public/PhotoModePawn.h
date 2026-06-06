#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PhotoModePawn.generated.h"

class UCameraComponent;
class UPhotoModeManager;
class UPhotoModePawnMovementComponent;

UCLASS()
class G1R_API APhotoModePawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* m_Camera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPhotoModePawnMovementComponent* m_PawnMovement;
    
protected:
    UPROPERTY(Instanced)
    UPhotoModeManager* m_PhotoModeManager;
    
public:
    APhotoModePawn(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void TakePicture();
    
};

