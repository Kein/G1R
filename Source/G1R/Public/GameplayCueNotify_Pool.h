#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GameplayCueNotify_Pool.generated.h"

class AVFXCue;

UCLASS()
class G1R_API AGameplayCueNotify_Pool : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AVFXCue> m_cueClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_CancelTag;
    
public:
    AGameplayCueNotify_Pool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasOpenCues() const;
    
    UFUNCTION(BlueprintCallable)
    AVFXCue* GetOpenCueByIndex(int32 Index);
    
};

