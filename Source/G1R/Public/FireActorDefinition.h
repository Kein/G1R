#pragma once
#include "CoreMinimal.h"
#include "InteractiveObjectDefinition.h"
#include "Templates/SubclassOf.h"
#include "FireActorDefinition.generated.h"

class UTimeRange;

UCLASS(EditInlineNew)
class G1R_API UFireActorDefinition : public UInteractiveObjectDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_StartActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_StopWithRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_AttenuatedWithRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HoursForUnLite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_StopWithSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTimeRange> m_TimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_SpellActivated;
    
    UFireActorDefinition();

};

