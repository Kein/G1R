#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_DisableSubcapsule.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_DisableSubcapsule : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SubcapsuleName;
    
    UAnimNotifyState_DisableSubcapsule();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCapsuleName(FName Name) const;
    
};

