#pragma once
#include "CoreMinimal.h"
#include "InventoryDefinition.h"
#include "FishDefinition.generated.h"

UCLASS(EditInlineNew)
class G1R_API UFishDefinition : public UInventoryDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PowerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Aggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimeToEscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_CharacterVisual;
    
public:
    UFishDefinition();

};

