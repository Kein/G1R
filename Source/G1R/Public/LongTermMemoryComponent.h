#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MemorizedEvent.h"
#include "MemoryFilter.h"
#include "OnForgetMemorizedEvent_BPDelegate.h"
#include "OnMemorizedEvent_BPDelegate.h"
#include "OnUpdateMemorizedEvent_BPDelegate.h"
#include "LongTermMemoryComponent.generated.h"

class AGothicCharacterState;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacterState, meta=(BlueprintSpawnableComponent))
class G1R_API ULongTermMemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMemorizedEvent_BP OnMemorizedEvent_BP;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateMemorizedEvent_BP OnUpdateMemorizedEvent_BP;
    
    UPROPERTY(BlueprintAssignable)
    FOnForgetMemorizedEvent_BP OnForgetMemorizedEvent_BP;
    
    ULongTermMemoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MemorizeEvent(const FMemorizedEvent& MemorizedEvent);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetOwningCharacterState() const;
    
    UFUNCTION(BlueprintPure)
    FMemoryFilter FilterEventsCausedByMe(FGameplayTag WithTag) const;
    
    UFUNCTION(BlueprintPure)
    FMemoryFilter FilterEventsCausedBy(FName CharacterGlobalId, FGameplayTag WithTag) const;
    
    UFUNCTION(BlueprintPure)
    FMemoryFilter FilterEventsAffectingMe(FGameplayTag WithTag) const;
    
    UFUNCTION(BlueprintPure)
    FMemoryFilter FilterEventsAffecting(FName CharacterGlobalId, FGameplayTag WithTag) const;
    
    UFUNCTION(BlueprintPure)
    FMemoryFilter Filter() const;
    
    UFUNCTION(BlueprintCallable)
    int32 BP_ForgetEventsMatchingFilter(const FMemoryFilter& NewFilter);
    
    UFUNCTION(BlueprintCallable)
    void AddOrReplaceLastMemoryMatchingAny(const FGameplayTagContainer& TagsToMatch, const FMemorizedEvent& NewMemorizedEvent, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    void AddOrReplaceLastMemoryMatchingAll(const FGameplayTagContainer& TagsToMatch, const FMemorizedEvent& NewMemorizedEvent, bool bExactMatch);
    
};

