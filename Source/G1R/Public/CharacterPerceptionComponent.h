#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EPerceptionSense.h"
#include "ERelationship.h"
#include "EWeather.h"
#include "LogicalLightReceiver.h"
#include "PerceptionComponent.h"
#include "PerceptionHandler.h"
#include "PerceptionHandlerHandle.h"
#include "PerceptionHearingSettings.h"
#include "PerceptionShortTermMemory.h"
#include "PerceptionSightSettings.h"
#include "CharacterPerceptionComponent.generated.h"

class AActor;
class AController;
class AGothicCharacter;
class AItemVisualWorld;
class APawn;

UCLASS(ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UCharacterPerceptionComponent : public UPerceptionComponent, public ILogicalLightReceiver {
    GENERATED_BODY()
public:
    UCharacterPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 ShareAwarenessWithAllSensedCharacters(const AGothicCharacter* SensedCharacterToSync, float WithinDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAwarenessToCharacter(const AGothicCharacter* Target, EPerceptionSense ViaSense, float Awareness);
    
    UFUNCTION(BlueprintCallable)
    void ReportPerceptionEvent(const FGameplayTag& EventTag, const FVector& AtLocation, AGothicCharacter* SensedCharacter, AActor* TargetActor, AActor* InstigatorActor, AActor* AffectedActor);
    
    UFUNCTION()
    bool IsSensedByAnyHostileCharacter() const;
    
protected:
    UFUNCTION()
    void HandleWeatherChanged(EWeather PreviousWeather, EWeather NewWeather);
    
    UFUNCTION()
    void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintPure)
    float GetSumLevelOfSensedCharactersMatchingPerceptionHandler(const FPerceptionHandlerHandle& Handler) const;
    
    UFUNCTION(BlueprintPure)
    FPerceptionSightSettings GetSightCapabilities() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetSensedLivingCharacters(EPerceptionSense ViaSense, bool bIncludeDefeated) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetSensedDeadCharacters(EPerceptionSense ViaSense) const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetHostileCharactersPerceivingMe(float Radius) const;
    
    UFUNCTION(BlueprintPure)
    FPerceptionHearingSettings GetHearingCapabilities() const;
    
    UFUNCTION(BlueprintPure)
    float GetAwarenessToCharacter(const AGothicCharacter* Target, EPerceptionSense ViaSense) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AItemVisualWorld*> GetAllSensedItemsMatchingPerceptionHandler(const FPerceptionHandlerHandle& Handler) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllSensedCharactersWithRelationship(ERelationship Relationship, const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllSensedCharactersMatchingPerceptionHandler(const FPerceptionHandlerHandle& Handler) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetAllSensedCharacters(const FGameplayTagContainer& IncludeCharactersWith, const FGameplayTagContainer& ExcludeCharactersWith, const EPerceptionSense ViaSense, bool bRequiresFullAwareness, float MinAwareness) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSmell(const AGothicCharacter* OtherCharacter, float MinTimeSeconds, float AwarenessThreshold) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSense(const AGothicCharacter* OtherCharacter, float MinTimeSeconds) const;
    
    UFUNCTION(BlueprintPure)
    bool CanSee(const AGothicCharacter* OtherCharacter, float MinTimeSeconds, float AwarenessThreshold) const;
    
    UFUNCTION(BlueprintPure)
    bool CanHear(const AGothicCharacter* OtherCharacter, float MinTimeSeconds, float AwarenessThreshold) const;
    
    UFUNCTION(BlueprintPure)
    FPerceptionShortTermMemory BP_GetMemory() const;
    
    UFUNCTION(BlueprintCallable)
    FPerceptionHandlerHandle BP_AddPerceptionHandler(const FPerceptionHandler& Handler);
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyAwarenessOfAllCharactersSensedBy(const AGothicCharacter* SensingCharacterToSync, float WithinDistance);
    

    // Fix for true pure virtual functions not being implemented
};

