#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_CollResp.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_CollResp : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ApplyOnCapsuleComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ApplyOnAllSubCapsules;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> m_CollisionResponesesMap;
    
    UAnimNotifyState_CollResp();

};

