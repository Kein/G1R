#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "AIWorldEventStartedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "AIWorldEventSubsystem.generated.h"

class AGothicCharacterState;
class UAIWorldEvent;
class UAIWorldEventExplicit;
class UAIWorldEventTimeBased;

UCLASS(BlueprintType)
class G1R_API UAIWorldEventSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<TSubclassOf<UAIWorldEventExplicit>, UAIWorldEventExplicit*> InactiveExplicitEvents;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIWorldEventExplicit>, UAIWorldEventExplicit*> PendingExplicitEvents;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIWorldEventExplicit>, UAIWorldEventExplicit*> ActiveExplicitEvents;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIWorldEventTimeBased>, UAIWorldEventTimeBased*> InactiveTimeBasedEvents;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIWorldEventTimeBased>, UAIWorldEventTimeBased*> PendingTimeBasedEvents;
    
    UPROPERTY()
    TMap<TSubclassOf<UAIWorldEventTimeBased>, UAIWorldEventTimeBased*> ActiveTimeBasedEvents;
    
public:
    UPROPERTY(BlueprintAssignable)
    FAIWorldEventStartedDelegate OnAnyWorldEventStarted;
    
    UPROPERTY(BlueprintAssignable)
    FAIWorldEventStartedDelegate OnAnyWorldEventPending;
    
    UPROPERTY(BlueprintAssignable)
    FAIWorldEventStartedDelegate OnAnyWorldEventStoppedPending;
    
    UPROPERTY(BlueprintAssignable)
    FAIWorldEventStartedDelegate OnAnyWorldEventEnded;
    
    UAIWorldEventSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopExplicitEventOfClass(TSubclassOf<UAIWorldEventExplicit> AIWorldEventClass);
    
    UFUNCTION(BlueprintCallable)
    void StartExplicitEventOfClass(TSubclassOf<UAIWorldEventExplicit> AIWorldEventClass);
    
    UFUNCTION(BlueprintPure)
    bool IsEventOfClassPending(TSubclassOf<UAIWorldEvent> AIWorldEventClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEventOfClassActive(TSubclassOf<UAIWorldEvent> AIWorldEventClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllowedToJoinEventOfClass(const AGothicCharacterState* CharacterState, TSubclassOf<UAIWorldEvent> AIWorldEventClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterJoinedEventOfClass(const AGothicCharacterState* CharacterState, TSubclassOf<UAIWorldEvent> AIWorldEventClass) const;
    
    UFUNCTION(BlueprintPure)
    UAIWorldEvent* GetActiveEventOfClass(TSubclassOf<UAIWorldEvent> AIWorldEventClass) const;
    
};

