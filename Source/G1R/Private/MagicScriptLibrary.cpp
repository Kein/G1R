#include "MagicScriptLibrary.h"
#include "Templates/SubclassOf.h"

UMagicScriptLibrary::UMagicScriptLibrary() {
}

bool UMagicScriptLibrary::WasSuccessfullyApplied(FActiveGameplayEffectHandle Handle) {
    return false;
}

void UMagicScriptLibrary::UnregisterGameplayTagEvent(UAbilitySystemComponent* AbilitySystem, UDelegateHandleContainer* DelegateHandleContainer) {
}

FVector UMagicScriptLibrary::TransformLocation(const FTransform& T, FVector Location) {
    return FVector{};
}

void UMagicScriptLibrary::StopAllMontagesOnActor(AActor* Actor) {
}

AActor* UMagicScriptLibrary::SpawnRandomPrimitive(FSpawnLocation SpawnInfo, AActor* Instigator, const TArray<TSubclassOf<AActor>>& Primitives) {
    return NULL;
}

UDecalComponent* UMagicScriptLibrary::SpawnDecalAtLocation(const UObject* WorldContextObject, const FVector& Location, const FVector& Normal, const FVector& Size, UMaterialInterface* Material, bool flatProjection) {
    return NULL;
}

AGothicNPCState* UMagicScriptLibrary::SpawnAIAgentDefinition(TSubclassOf<UGameplayEffect> SpawnGameplayEffect, TSubclassOf<USpawnAIAgentDefinition> NewSpawnAIAgentDefinition, FVector position, FRotator Rotation, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, AActor* Instigator) {
    return NULL;
}

AActor* UMagicScriptLibrary::SpawnActorDeferred(const UObject* WorldContextObject, UClass* Class, const FTransform& Transform) {
    return NULL;
}

void UMagicScriptLibrary::SetGESpecDuration(FGameplayEffectSpecHandle& GeSpecHandle, float Duration) {
}

void UMagicScriptLibrary::SetGameplayEffectSpecDuration(FGameplayEffectSpecHandle& GeSpecHandle, float Duration) {
}

TArray<FSpawnLocationArray> UMagicScriptLibrary::RetrieveSpawnPositionsByStepIndex(const TArray<FSpawnLocation>& SpawnLocations) {
    return TArray<FSpawnLocationArray>();
}

UDelegateHandleContainer* UMagicScriptLibrary::RegisterGameplayTagEvent(UAbilitySystemComponent* AbilitySystem, const FGameplayTag& GameplayTag, TEnumAsByte<EGameplayTagEventType::Type> TagEventType, UObject* UserObject, FName FunctionName) {
    return NULL;
}

void UMagicScriptLibrary::ReceiveGameplayEventFromActor(AActor* Actor, FGameplayTag EventTag, const FOnReceiveEventDelegate& Callback) {
}

FRotator UMagicScriptLibrary::OrientateVectorToAnotherVector(const FVector& v1, const FVector& v2) {
    return FRotator{};
}

void UMagicScriptLibrary::ModifyGravity(AActor* Actor, bool simulationEnabled, FVector Velocity) {
}

void UMagicScriptLibrary::LogInfo(EGothicLogCategory Category, const FString& Text) {
}

bool UMagicScriptLibrary::IsWater(const AActor* Actor) {
    return false;
}

bool UMagicScriptLibrary::IsValidStackableActiveGameplayEffect(const FActiveGameplayEffect& GameplayEffect) {
    return false;
}

bool UMagicScriptLibrary::IsValidGameplaySpecHandle(FGameplayAbilitySpecHandle Handle) {
    return false;
}

bool UMagicScriptLibrary::IsValidGameplayEffectHandle(FActiveGameplayEffectHandle Handle) {
    return false;
}

bool UMagicScriptLibrary::IsTargetVisible(AActor* SourceActor, AActor* Target, FVector OriginPoint, UPrimitiveComponent* OtherComp) {
    return false;
}

bool UMagicScriptLibrary::IsTargetReachable(AActor* Caster, AActor* Target, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& Responses, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType) {
    return false;
}

bool UMagicScriptLibrary::IsScroll(const ASpellItemVisual* SpellItemVisual) {
    return false;
}

bool UMagicScriptLibrary::IsPointInsideTriangleGiven(const FVector& Point, const FVector& trianglePoint, const FVector& heightDirection, float Angle, float Height) {
    return false;
}

bool UMagicScriptLibrary::IsPointInsideBox(FVector Point, UBoxComponent* BoxComponent) {
    return false;
}

bool UMagicScriptLibrary::IsActivaAbilityByClass(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayAbility> AbilityClass) {
    return false;
}

FVector UMagicScriptLibrary::InverseTransformLocation(const FTransform& T, FVector Location) {
    return FVector{};
}

bool UMagicScriptLibrary::HasMoreScrolls(AActor* Owner) {
    return false;
}

FGameplayAbilitySpecHandle UMagicScriptLibrary::GivePlayRemove(UAbilitySystemComponent* TargetAbilitySystemComponent, FGameplayAbilitySpec& Spec, const FGameplayEventData& EventData) {
    return FGameplayAbilitySpecHandle{};
}

FGameplayEventData UMagicScriptLibrary::GetTargetEventDataForTelekinesis(AActor* Target) {
    return FGameplayEventData{};
}

FGameplayEventData UMagicScriptLibrary::GetTargetEventData(AActor* Target) {
    return FGameplayEventData{};
}

int32 UMagicScriptLibrary::GetStackLimitCount(FGameplayEffectSpecHandle SpecHandle) {
    return 0;
}

ASpellItemVisual* UMagicScriptLibrary::GetSpellVisualRuneScroll(AActor* Owner) {
    return NULL;
}

USpellConfig* UMagicScriptLibrary::GetSpellConfigGivenACharacter(const AGothicCharacter* Character) {
    return NULL;
}

bool UMagicScriptLibrary::GetSingleActorTargetFromCameraBySphere(AGothicCharacter* Instigator, float TraceRange, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UMagicScriptLibrary::GetSingleActorTargetFromCameraByLine(const UObject* WorldContextObject, AGothicCharacter* Instigator, float TraceRange, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UMagicScriptLibrary::GetSingleActorTargetFromCameraByCapsule(const UObject* WorldContextObject, AGothicCharacter* Instigator, float TraceRange, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UMagicScriptLibrary::GetSingleActorTargetFromCamera(const UObject* WorldContextObject, AActor* Instigator, float TraceRange, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const FCollisionResponseContainer& Responses, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

TSubclassOf<AActor> UMagicScriptLibrary::GetPreloaded(const TSoftClassPtr<AActor>& SoftClassPtr) {
    return NULL;
}

FGameplayTag UMagicScriptLibrary::GetOppositeCombatDirection(const FGameplayTag& Direction) {
    return FGameplayTag{};
}

USceneComponent* UMagicScriptLibrary::GetInteractSensorPoint(AActor* Target) {
    return NULL;
}

float UMagicScriptLibrary::GetHalfHeightActor(const AActor* Actor) {
    return 0.0f;
}

TEnumAsByte<EMovementMode> UMagicScriptLibrary::GetGroundMovementMode(AGothicCharacter* Character) {
    return MOVE_None;
}

EGameplayEffectStackingType UMagicScriptLibrary::GetGameplayEffectStackingType(FGameplayEffectSpecHandle SpecHandle) {
    return EGameplayEffectStackingType::None;
}

int32 UMagicScriptLibrary::GetGameplayEffectStackCount(const FActiveGameplayEffect& GameplayEffect) {
    return 0;
}

float UMagicScriptLibrary::GetDurationMontageSection(const UAnimMontage* Montage, const FName& SectionName) {
    return 0.0f;
}

FGameplayTag UMagicScriptLibrary::GetCombatDirectionGivenHitLocation(const FVector& targetForward, const FVector& targetRight, const FVector& hitDirectionNormalized) {
    return FGameplayTag{};
}

FTransform UMagicScriptLibrary::GetCharacterBoneTransformGivenAWeaponDefinition(const AGothicCharacter* Character, UWeaponDefinition* WeaponDefinition) {
    return FTransform{};
}

FTransform UMagicScriptLibrary::GetCharacterBoneTransformGivenABoneName(const AGothicCharacter* Character, const FName& BoneName) {
    return FTransform{};
}

FName UMagicScriptLibrary::GetCharacterBoneGivenAWeaponDefinition(const AGothicCharacter* Character, UWeaponDefinition* WeaponDefinition) {
    return NAME_None;
}

FVector UMagicScriptLibrary::GetCameraProjectionOverCharacter(AGothicCharacter* Instigator) {
    return FVector{};
}

bool UMagicScriptLibrary::GetCameraDirectionAndLocation(const AGothicCharacter* Instigator, FVector& cameraDirection, FVector& cameraLocation) {
    return false;
}

USpellItemAnimConfig* UMagicScriptLibrary::GetAnimationDataFromDataModule(const AActor* Actor, const FGameplayTag& spellTag) {
    return NULL;
}

TArray<AGothicPlayerState*> UMagicScriptLibrary::GetAllPlayersNearCurrentLocation(UWorld* World, AActor* FromActor, float Distance) {
    return TArray<AGothicPlayerState*>();
}

TArray<AGothicPlayerState*> UMagicScriptLibrary::GetAllPlayers(AActor* Actor) {
    return TArray<AGothicPlayerState*>();
}

void UMagicScriptLibrary::FinishSpawning(AActor* Actor, const FTransform& Transform) {
}

bool UMagicScriptLibrary::FindWaterSurfaceAtLocation(const UObject* WorldContextObject, const FVector& Location, FHitResult& HitResult, AActor* IgnoreActor, float MinHeight, float MaxHeight) {
    return false;
}

void UMagicScriptLibrary::FindSpawnPositionForAI(const UObject* WorldContextObject, TSubclassOf<USpawnAIAgentDefinition> spawnDef, TArray<FVector>& spawnPositions, const FTransform& Transform, float RadiusMin, float RadiusMax, float radiusStep, float Angle, float AngleStep) {
}

void UMagicScriptLibrary::FindSpawnLocations(TArray<FSpawnLocation>& SpawnLocations, const AActor* Target, const FSpawnLocationQueryParams Params) {
}

FRotator UMagicScriptLibrary::FindLookAtRotation(const FVector& Start, const FVector& Target) {
    return FRotator{};
}

bool UMagicScriptLibrary::FindFloorAtLocationAverage(const UObject* WorldContextObject, const FVector& Location, FVector& floorLocation, FVector& Normal, AActor* IgnoreActor, TEnumAsByte<ECollisionChannel> Channel, float MinHeight, float MaxHeight, int32 numRays, int32 wide) {
    return false;
}

bool UMagicScriptLibrary::FindFloorAtLocation(const UObject* WorldContextObject, const FVector& Location, FHitResult& HitResult, AActor* IgnoreActor, TEnumAsByte<ECollisionChannel> Channel, float MinHeight, float MaxHeight, bool EvaluateWaterSurface) {
    return false;
}

FVector UMagicScriptLibrary::FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection) {
    return FVector{};
}

bool UMagicScriptLibrary::FillWithDamageTypeAndDamageAmountFromRuneSpellContainer(AGothicCharacter* GothicCharacter, const URuneSpellContainer* Container, FGameplayTag& DamageType, TArray<float>& Damages) {
    return false;
}

void UMagicScriptLibrary::DetachFromEvent(AActor* Owner, UDelegateHandleContainer* DelegateHandleContainer) {
}

void UMagicScriptLibrary::DebugPrintMessage(const FString& Message, FColor Color) {
}

void UMagicScriptLibrary::DebugOnScreen(const FName& Text, float Duration, const FColor& Color, int32 Key) {
}

FGameplayEventData UMagicScriptLibrary::CreateEventData(USceneComponent* SceneComponent) {
    return FGameplayEventData{};
}

bool UMagicScriptLibrary::CheckIfCanDoUntransformation(AActor* Actor) {
    return false;
}

bool UMagicScriptLibrary::CheckGEHasRemoveOtherGEGameplayTag(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle, FGameplayTagContainer GameplayTagContainer) {
    return false;
}

FGameplayAbilityTargetData_Shrink UMagicScriptLibrary::CastToTargetDataShrink(const FGameplayEventData& Payload) {
    return FGameplayAbilityTargetData_Shrink{};
}

bool UMagicScriptLibrary::CanEquipRuneOrScrollAfterUse(AActor* Owner) {
    return false;
}

bool UMagicScriptLibrary::CalculateShootingSpellProjectileReachabilityFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const AGothicCharacter* Target, const FName& SocketName, float Range) {
    return false;
}

bool UMagicScriptLibrary::CalculateShootingProjectileTargetLocationFromLocation(const UObject* WorldContextObject, AGothicCharacter* Instigator, const FVector& SpawnLocation, const FVector& Location, const FVector& Direction, float projectileRange, float ProjectileRadius, const FName& profileNameCamera, const FName& ProfileName, const FName& traceTag, FVector& TargetLocation, FHitResult& OutHitResult, bool Debug, float debugLifeTime) {
    return false;
}

bool UMagicScriptLibrary::CalculateShootingProjectileTargetLocationFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const FVector& SpawnLocation, float projectileRange, float ProjectileRadius, const FName& profileNameCamera, const FName& ProfileName, const FName& traceTag, FVector& TargetLocation, FHitResult& OutHitResult, bool Debug, float debugLifeTime) {
    return false;
}

bool UMagicScriptLibrary::CalculateShootingArrowProjectileReachabilityFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const AGothicCharacter* Target) {
    return false;
}

bool UMagicScriptLibrary::CalculateAreaSpellReachabilityFromCamera(const UObject* WorldContextObject, AGothicCharacter* Instigator, const AGothicCharacter* Target, const USpellConfig* SpellConfig, float Radius, float Range) {
    return false;
}

UDelegateHandleContainer* UMagicScriptLibrary::AttachToEventTag(AActor* Owner, const FGameplayTag EventTag, UObject* FunctionUser, const FName FunctionName) {
    return NULL;
}


