#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "GenericAbilityTask_WaitForTagChange.generated.h"

UCLASS()
class G1R_API UGenericAbilityTask_WaitForTagChange : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag EndWhenTagIsRemoved;
    
    UPROPERTY()
    FGameplayTag EndWhenTagIsAdded;
    
    UPROPERTY()
    bool bCheckTagsOnActivate;
    
    UGenericAbilityTask_WaitForTagChange();

    UFUNCTION()
    void OnStateTagCountChanged(const FGameplayTag InTag, int32 NewCount);
    
};

