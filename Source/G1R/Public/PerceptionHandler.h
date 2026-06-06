#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EOwnershipRelationFlags.h"
#include "EPerceptionSense.h"
#include "PerceptionConditionDelegateDelegate.h"
#include "PerceptionDelegateDelegate.h"
#include "PerceptionHandlerHandle.h"
#include "Templates/SubclassOf.h"
#include "PerceptionHandler.generated.h"

class AActor;
class UInteractiveObjectDefinition;
class UObject;

USTRUCT(BlueprintType)
struct FPerceptionHandler {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UObject> WeakContext;
    
    UPROPERTY()
    FPerceptionHandlerHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleCharactersWithAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleTargetCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleTargetCharactersWithAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreTargetCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleAffectedCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleAffectedCharactersWithAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreAffectedCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleInstigatorCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleInstigatorCharactersWithAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreInstigatorCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleSensingCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleSensingCharactersWithAny;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreSensingCharactersWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOriginHasToBeACharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTargetHasToBeACharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAffectedHasToBeACharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInstigatorHasToBeACharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TickRateSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceToOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistanceToOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EntryAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExitAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximalPathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimalPathLength;
    
    UPROPERTY(EditAnywhere)
    bool bFilterForCharactersLookingAtSensor;
    
    UPROPERTY(EditAnywhere)
    bool bFilterForCharactersLookingAtAllys;
    
    UPROPERTY(EditAnywhere)
    bool bFilterForCharactersLookingAtSensorOrAllys;
    
    UPROPERTY(EditAnywhere)
    bool bFilterForSensorLookingAtSomeone;
    
    UPROPERTY(EditAnywhere)
    bool bRequireFreeLineOfSight;
    
    UPROPERTY(EditAnywhere)
    bool bRequireInteractiveObject;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> HandledOriginActors;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> ExcludedOriginActors;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> ExcludedInstigatorActors;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> HandledInstigatorActors;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> HandledAffectedActors;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> ExcludedAffectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowedExactEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GainedCharacterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer LostCharacterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer HandleEffectCauserWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreEffectCauserWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerceptionDelegate PerceptionGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPerceptionDelegate PerceptionLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ShouldUpdateOnOriginChangedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ShouldUpdateOnSensorChangedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ShouldUpdateOnEvent;
    
    UPROPERTY(EditAnywhere)
    EOwnershipRelationFlags HandleSensorObjectOwnership;
    
    UPROPERTY(EditAnywhere)
    EOwnershipRelationFlags IgnoreSensorObjectOwnership;
    
    UPROPERTY(EditAnywhere)
    EOwnershipRelationFlags HandleOriginObjectOwnership;
    
    UPROPERTY(EditAnywhere)
    EOwnershipRelationFlags IgnoreOriginObjectOwnership;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UInteractiveObjectDefinition>> HandleInteractiveObjects;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UInteractiveObjectDefinition>> IgnoreInteractiveObjects;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag OnlyHandleItemsOfType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoreItemTypes;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer HandleItemSpecs;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoreItemSpecs;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> HandleItemConsumeEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EPerceptionSense> RequiredSense;
    
    UPROPERTY(EditAnywhere)
    float HandleItemValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PerceptionGainedCooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PerceptionLostCooldownSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequiresSensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequiresOriginToBeInSensorArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequiresOriginToBeInSensorGuildArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequiresOriginToBeInSensorPersonalArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPerceptionConditionDelegate> OnShouldHandlePair;
    
    G1R_API FPerceptionHandler();
};

