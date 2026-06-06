#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ArrowData.h"
#include "ArrowsStuckComponent.generated.h"

class AActor;
class UInventoryComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UArrowsStuckComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FArrowData> m_Arrows;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UInventoryComponent> m_InventoryComponent;
    
public:
    UArrowsStuckComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnPlayerGoToSleep();
    
private:
    UFUNCTION()
    void OnCharacterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
};

