#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AmbientLifeConfig.generated.h"

class ACharacter;
class UPerceptionAgentSettings;

UCLASS(BlueprintType, Transient)
class G1R_API UAmbientLifeConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ACharacter> m_CharacterInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_FleeForwardSpeedMaxMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_FleeUpwardSpeedMaxMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TimeForEndFleeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RefillHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPerceptionAgentSettings> m_PerceptionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_RegisterToEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_EventId;
    
    UAmbientLifeConfig();

};

