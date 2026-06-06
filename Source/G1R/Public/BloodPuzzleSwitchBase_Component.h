#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "BloodPuzzleSwitchBase_Component.generated.h"

class AInteractiveObjectActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UBloodPuzzleSwitchBase_Component : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FGameplayMessageListenerHandle> m_Listeners;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FillTankPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FillExitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBeingFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFilled;
    
private:
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    FName m_InternalName;
    
public:
    UBloodPuzzleSwitchBase_Component(const FObjectInitializer& ObjectInitializer);

};

