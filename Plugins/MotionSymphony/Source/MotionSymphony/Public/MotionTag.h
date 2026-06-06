#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MotionTag.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, EditInlineNew)
class MOTIONSYMPHONY_API UMotionTag : public UObject {
    GENERATED_BODY()
public:
    UMotionTag();

    UFUNCTION(BlueprintImplementableEvent)
    void Received_RunPreProcessForTag(float PoseInterval) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetTagName() const;
    
};

