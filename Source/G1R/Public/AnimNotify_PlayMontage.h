#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_PlayMontage.generated.h"

class UAnimSequenceBase;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_PlayMontage : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequenceBase*> AnimSequenceList;
    
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
public:
    UAnimNotify_PlayMontage();

};

