#pragma once
#include "CoreMinimal.h"
#include "InteractiveObjectActor.h"
#include "ClimbableWall.generated.h"

class AGothicCharacter;
class UBoxComponent;
class UCapsuleComponent;

UCLASS()
class G1R_API AClimbableWall : public AInteractiveObjectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* m_BoxComponent;
    
private:
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* m_CharacterCapsuleComponent;
    
public:
    AClimbableWall(const FObjectInitializer& ObjectInitializer);

};

