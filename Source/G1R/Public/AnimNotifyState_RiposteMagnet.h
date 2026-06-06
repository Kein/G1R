#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_RiposteMagnet.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_RiposteMagnet : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_DamageBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_DamagePosition;
    
    UAnimNotifyState_RiposteMagnet();

};

