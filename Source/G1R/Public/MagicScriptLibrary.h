#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "GameplayEffect.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGothicLogCategory.h"
#include "GameplayAbilityTargetData_Shrink.h"
#include "OnReceiveEventDelegateDelegate.h"
#include "SpawnLocation.h"
#include "SpawnLocationArray.h"
#include "SpawnLocationQueryParams.h"
#include "Templates/SubclassOf.h"
#include "MagicScriptLibrary.generated.h"

class AActor;
class AGothicCharacter;
class AGothicNPCState;
class AGothicPlayerState;
class ASpellItemVisual;
class UAIState_DailyRoutine;
class UAbilitySystemComponent;
class UAnimMontage;
class UBoxComponent;
class UDecalComponent;
class UDelegateHandleContainer;
class UGameplayAbility;
class UGameplayEffect;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class URuneSpellContainer;
class USceneComponent;
class USpawnAIAgentDefinition;
class USpellConfig;
class USpellItemAnimConfig;
class UWeaponDefinition;
class UWorld;

UCLASS(BlueprintType)
class G1R_API UMagicScriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicScriptLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WasSuccessfullyApplied(FActiveGameplayEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterGameplayTagEvent(UAbilitySystemComponent* AbilitySystem, UDelegateHandleContainer* DelegateHandleContainer);
    
    UFUNCTION(BlueprintCallable)
    static FVector TransformLocation(const FTransform& T, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllMontagesOnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnRandomPrimitive(FSpawnLocation SpawnInfo, AActor* Instigator, const TArray<TSubclassOf<AActor>>& Primitives);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecalAtLocation(const UObject* WorldContextObject, const FVector& Location, const FVector& Normal, const FVector& Size, UMaterialInterface* Material, bool flatProjection);
    
    UFUNCTION(BlueprintCallable)
    static AGothicNPCState* SpawnAIAgentDefinition(TSubclassOf<UGameplayEffect> SpawnGameplayEffect, TSubclassOf<USpawnAIAgentDefinition> NewSpawnAIAgentDefinition, FVector position, FRotator Rotation, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorDeferred(const UObject* WorldContextObject, UClass* Class, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SetGESpecDuration(FGameplayEffectSpecHandle& GeSpecHandle, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameplayEffectSpecDuration(FGameplayEffectSpecHandle& GeSpecHandle, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSpawnLocationArray> RetrieveSpawnPositionsByStepIndex(const TArray<FSpawnLocation>& SpawnLocations);
    
    UFUNCTION(BlueprintCallable)
    static UDelegateHandleContainer* RegisterGameplayTagEvent(UAbilitySystemComponent* AbilitySystem, const FGameplayTag& GameplayTag, TEnumAsByte<EGameplayTagEventType::Type> TagEventType, UObject* UserObject, FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static void ReceiveGameplayEventFromActor(AActor* Actor, FGameplayTag EventTag, const FOnReceiveEventDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    static FRotator OrientateVectorToAnotherVector(const FVector& v1, const FVector& v2);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyGravity(AActor* Actor, bool simulationEnabled, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void LogInfo(EGothicLogCategory Category, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWater(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidStackableActiveGameplayEffect(const FActiveGameplayEffect& GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidGameplaySpecHandle(FGameplayAbilitySpecHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidGameplayEffectHandle(FActiveGameplayEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetVisible(AActor* SourceActor, AActor* Target, FVector OriginPoint, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTargetReachable(AActor* Caster, AActor* Target, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& Responses, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsScroll(const ASpellItemVisual* SpellItemVisual);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPointInsideTriangleGiven(const FVector& Point, const FVector& trianglePoint, const FVector& heightDirection, float Angle, float Height);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPointInsideBox(FVector Point, UBoxComponent* BoxComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActivaAbilityByClass(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    static FVector InverseTransformLocation(const FTransform& T, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static bool HasMoreScrolls(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAbilitySpecHandle GivePlayRemove(UAbilitySystemComponent* TargetAbilitySystemComponent, FGameplayAbilitySpec& Spec, const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEventData GetTargetEventDataForTelekinesis(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEventData GetTargetEventData(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStackLimitCount(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintCallable)
    static ASpellItemVisual* GetSpellVisualRuneScroll(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static USpellConfig* GetSpellConfigGivenACharacter(const AGothicCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSingleActorTargetFromCameraBySphere(AGothicCharacter* Instigator, float TraceRange, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSingleActorTargetFromCameraByLine(const UObject* WorldContextObject, AGothicCharacter* Instigator, float TraceRange, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSingleActorTargetFromCameraByCapsule(const UObject* WorldContextObject, AGothicCharacter* Instigator, float TraceRange, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSingleActorTargetFromCamera(const UObject* WorldContextObject, AActor* Instigator, float TraceRange, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> GetPreloaded(const TSoftClassPtr<AActor>& SoftClassPtr);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetOppositeCombatDirection(const FGameplayTag& Direction);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* GetInteractSensorPoint(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static float GetHalfHeightActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EMovementMode> GetGroundMovementMode(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static EGameplayEffectStackingType GetGameplayEffectStackingType(FGameplayEffectSpecHandle SpecHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameplayEffectStackCount(const FActiveGameplayEffect& GameplayEffect);
    
    UFUNCTION(BlueprintCallable)
    static float GetDurationMontageSection(const UAnimMontage* Montage, const FName& SectionName);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetCombatDirectionGivenHitLocation(const FVector& targetForward, const FVector& targetRight, const FVector& hitDirectionNormalized);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetCharacterBoneTransformGivenAWeaponDefinition(const AGothicCharacter* Character, UWeaponDefinition* WeaponDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetCharacterBoneTransformGivenABoneName(const AGothicCharacter* Character, const FName& BoneName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCharacterBoneGivenAWeaponDefinition(const AGothicCharacter* Character, UWeaponDefinition* WeaponDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetCameraProjectionOverCharacter(AGothicCharacter* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCameraDirectionAndLocation(const AGothicCharacter* Instigator, FVector& cameraDirection, FVector& cameraLocation);
    
    UFUNCTION(BlueprintCallable)
    static USpellItemAnimConfig* GetAnimationDataFromDataModule(const AActor* Actor, const FGameplayTag& spellTag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AGothicPlayerState*> GetAllPlayersNearCurrentLocation(UWorld* World, AActor* FromActor, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AGothicPlayerState*> GetAllPlayers(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void FinishSpawning(AActor* Actor, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindWaterSurfaceAtLocation(const UObject* WorldContextObject, const FVector& Location, FHitResult& HitResult, AActor* IgnoreActor, float MinHeight, float MaxHeight);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindSpawnPositionForAI(const UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> spawnDef, TArray<FVector>& spawnPositions, const FTransform& Transform, float RadiusMin, float RadiusMax, float radiusStep, float Angle, float AngleStep);
    
    UFUNCTION(BlueprintCallable)
    static void FindSpawnLocations(TArray<FSpawnLocation>& SpawnLocations, const AActor* Target, const FSpawnLocationQueryParams Params);
    
    UFUNCTION(BlueprintCallable)
    static FRotator FindLookAtRotation(const FVector& Start, const FVector& Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindFloorAtLocationAverage(const UObject* WorldContextObject, const FVector& Location, FVector& floorLocation, FVector& Normal, AActor* IgnoreActor, TEnumAsByte<ECollisionChannel> Channel, float MinHeight, float MaxHeight, int32 numRays, int32 wide);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindFloorAtLocation(const UObject* WorldContextObject, const FVector& Location, FHitResult& HitResult, AActor* IgnoreActor, TEnumAsByte<ECollisionChannel> Channel, float MinHeight, float MaxHeight, bool EvaluateWaterSurface);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    
    UFUNCTION(BlueprintCallable)
    static bool FillWithDamageTypeAndDamageAmountFromRuneSpellContainer(AGothicCharacter* GothicCharacter, const URuneSpellContainer* Container, FGameplayTag& DamageType, TArray<float>& Damages);
    
    UFUNCTION(BlueprintCallable)
    static void DetachFromEvent(AActor* Owner, UDelegateHandleContainer* DelegateHandleContainer);
    
    UFUNCTION(BlueprintCallable)
    static void DebugPrintMessage(const FString& Message, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    static void DebugOnScreen(const FName& Text, float Duration, const FColor& Color, int32 Key);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEventData CreateEventData(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckIfCanDoUntransformation(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckGEHasRemoveOtherGEGameplayTag(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle, FGameplayTagContainer GameplayTagContainer);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAbilityTargetData_Shrink CastToTargetDataShrink(const FGameplayEventData& Payload);
    
    UFUNCTION(BlueprintCallable)
    static bool CanEquipRuneOrScrollAfterUse(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalculateShootingSpellProjectileReachabilityFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const AGothicCharacter* Target, const FName& SocketName, float Range);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalculateShootingProjectileTargetLocationFromLocation(const UObject* WorldContextObject, AGothicCharacter* Instigator, const FVector& SpawnLocation, const FVector& Location, const FVector& Direction, float projectileRange, float ProjectileRadius, const FName& profileNameCamera, const FName& ProfileName, const FName& traceTag, FVector& TargetLocation, FHitResult& OutHitResult, bool Debug, float debugLifeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalculateShootingProjectileTargetLocationFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const FVector& SpawnLocation, float projectileRange, float ProjectileRadius, const FName& profileNameCamera, const FName& ProfileName, const FName& traceTag, FVector& TargetLocation, FHitResult& OutHitResult, bool Debug, float debugLifeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalculateShootingArrowProjectileReachabilityFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const AGothicCharacter* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CalculateAreaSpellReachabilityFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const AGothicCharacter* Target, const USpellConfig* SpellConfig, float Radius, float Range);
    
    UFUNCTION(BlueprintCallable)
    static UDelegateHandleContainer* AttachToEventTag(AActor* Owner, const FGameplayTag EventTag, UObject* FunctionUser, const FName FunctionName);
    
};

