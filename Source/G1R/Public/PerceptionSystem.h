#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TickableGameStateSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "EPerceptionSense.h"
#include "ERelationship.h"
#include "PerceivedAgent.h"
#include "PerceptionAgentHandle.h"
#include "PerceptionHandlerHandle.h"
#include "PerceptionHearingSettings.h"
#include "PerceptionSightSettings.h"
#include "PerceptionSoundAreaHandle.h"
#include "PerceptionSystemWorld.h"
#include "RememberedPerception.h"
#include "PerceptionSystem.generated.h"

class AActor;
class AGothicCharacter;
class AItemVisualWorld;
class UCharacterPerceptionComponent;
class UPerceptionAgentSettings;

UCLASS(BlueprintType, Config=Game)
class G1R_API UPerceptionSystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPerceptionSystemWorld PerceptionWorld;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bSingleThreadedGather;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bShowSightPerceptions;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPerceptionAgentSettings> DefaultAgentSettingsClass;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SubscribedEventTags;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AgentTagWhitelist;
    
public:
    UPerceptionSystem();

    UFUNCTION(BlueprintCallable)
    bool TryCreatePerceptionEvent(const AGothicCharacter* EventSensedBy, const FGameplayTag& EventTag, const FVector& AtLocation, const FVector& AtNavLocation, const AActor* OriginActor, const AActor* TargetActor, const AActor* InstigatorActor, const AActor* AffectedActor, FRememberedPerception& Perception);
    
    UFUNCTION(BlueprintCallable)
    void TestRemoveAllPerceptionHandlers();
    
    UFUNCTION(BlueprintCallable)
    void StopSoundEvent(FPerceptionSoundAreaHandle AreaEventHandle);
    
    UFUNCTION(BlueprintCallable)
    FPerceptionSoundAreaHandle ReportSoundWithInfiniteDuration(AActor* Instigator, const FGameplayTag& SoundTag, const FVector& AtLocation, EPerceptionNoiseLoudness Loudness, bool IsBoundToOriginActor);
    
    UFUNCTION(BlueprintCallable)
    FPerceptionSoundAreaHandle ReportSoundWithDuration(AActor* Instigator, const FGameplayTag& SoundTag, const FVector& AtLocation, EPerceptionNoiseLoudness Loudness, float Duration, bool IsBoundToOriginActor);
    
    UFUNCTION(BlueprintCallable)
    void ReportSoundShort(AActor* Instigator, const FGameplayTag& SoundTag, const FVector& AtLocation, EPerceptionNoiseLoudness Loudness, float WaitSeconds, bool IsBoundToOriginActor);
    
    UFUNCTION(BlueprintPure)
    bool IsInHearingRangeOfAnyPlayer(const AActor* Actor, EPerceptionNoiseLoudness Loudness) const;
    
    UFUNCTION(BlueprintPure)
    bool HasFreeLineOfSightBetween(const AGothicCharacter* Character, const AGothicCharacter* Other, float MaxRaycastAgeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    FPerceptionAgentHandle GetViewTargetAgent(FPerceptionAgentHandle SensingAgent) const;
    
    UFUNCTION(BlueprintPure)
    FPerceptionSightSettings GetSightCapabilities(const UCharacterPerceptionComponent* CharacterPerceptionComponent) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AItemVisualWorld*> GetItemsPerceivedByHandler(FPerceptionHandlerHandle HandlerHandle) const;
    
    UFUNCTION(BlueprintPure)
    FPerceptionHearingSettings GetHearingCapabilities(const UCharacterPerceptionComponent* CharacterPerceptionComponent) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacter*> GetCharactersPerceivedByHandler(FPerceptionHandlerHandle HandlerHandle, bool bCheckForTags) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllSensedCharactersWithRelationship(AGothicCharacter* PerceivedBy, ERelationship Relationship, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllSensedCharacters(AGothicCharacter* PerceivedBy, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllHostilesSensingCharacter(const AGothicCharacter* SensedCharacter, EPerceptionSense ViaSense, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, float MinAwareness) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllCharactersSensing(const AActor* SensedActor, EPerceptionSense ViaSense, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, float MinAwareness) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAgentTagsOfAgent(FPerceptionAgentHandle Agent) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAgentTagsOfActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    void FillPerceivedAgent(FPerceivedAgent& Out, FPerceptionAgentHandle Sensing, FPerceptionAgentHandle Perceived) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSense(const AGothicCharacter* Character, const AGothicCharacter* Other, float MinTimeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSee(const AGothicCharacter* Character, const AGothicCharacter* Other, float MinTimeSeconds, float AwarenessThreshold) const;
    
    UFUNCTION(BlueprintPure)
    bool CanAnyPlayerSee(const AActor* Actor, float MinTimeSeconds, float AwarenessThreshold) const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastPerceptionEvent(const FGameplayTag& EventTag, const FVector& AtLocation, const AActor* OriginActor, const AActor* TargetActor, const AActor* InstigatorActor, const AActor* AffectedActor, const AActor* EffectCauser, FGameplayTagContainer EffectCauserTags, float Magnitude, float EstimatedSecondsUntilImpact);
    
};

