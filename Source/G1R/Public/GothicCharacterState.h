#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MassEntityConfigAsset.h"
#include "CharacterStateProvider.h"
#include "DataModuleOwner.h"
#include "GothicPathfollowSettings.h"
#include "MPSyncCommonInfo.h"
#include "Templates/SubclassOf.h"
#include "GothicCharacterState.generated.h"

class AActor;
class AGothicCharacter;
class AGothicCharacterState;
class APawn;
class UCharacterConfig;
class UCharacterDefinition;
class UCharacterRelationshipComponent;
class UDataModuleComponent;
class UGameplayEffect_Guild;
class UGenericVoicelineComponent;
class UGothicAbilitySystemComponent;
class UGothicCharacterPersonality;
class UGothicNavigationInvokerComponent;
class UInteractiveObjectDefinition;
class UInteractorComponent;
class UInventoryComponent;
class UItemRecipeDefinition;
class ULongTermMemoryComponent;
class UObject;
class UPersonalBelongingsComponent;
class UPreferredLocationComponent;
class URegionCharacterComponent;

UCLASS(Config=Spawning)
class G1R_API AGothicCharacterState : public APlayerState, public IAbilitySystemInterface, public IDataModuleOwner, public IMPSyncCommonInfo, public ICharacterStateProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<UGothicCharacterPersonality> m_CurrentPersonality;
    
    UPROPERTY()
    bool bPersistent;
    
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UGothicAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UDataModuleComponent* DataModuleComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    ULongTermMemoryComponent* LongTermMemoryComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UCharacterRelationshipComponent* CharacterRelationshipComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPersonalBelongingsComponent* PersonalBelongingsComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UPreferredLocationComponent* PreferredLocationComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UGenericVoicelineComponent* GenericVoicelineComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    URegionCharacterComponent* RegionComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UGothicNavigationInvokerComponent* GothicNavigationInvokerComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UInteractorComponent* InteractorComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Replicated)
    UCharacterConfig* CharacterConfig;
    
    UPROPERTY(EditAnywhere)
    FMassEntityConfig MassEntityConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FString m_PartyConfigId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 m_PartySlotIndex;
    
    UPROPERTY()
    AGothicCharacter* OwnedCharacter;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FName CharacterGlobalId;
    
    UPROPERTY(BlueprintReadOnly)
    TSet<AGothicCharacterState*> InPartyWith;
    
    AGothicCharacterState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static AGothicCharacterState* TryGetCharacterStateFromActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetTrueGuild(TSubclassOf<UGameplayEffect_Guild> GuildEffectClass);
    
    UFUNCTION(BlueprintCallable)
    void SetPersistent(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPersonality(const TSubclassOf<UGothicCharacterPersonality> personality);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLocationAndDirection(const FVector& Location, const FVector& Forward);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName MakeCharacterGlobalId(const UObject* WorldContextObject, FName CharacterUniqueName, const FString& SpawnedBy, int32 SpawnIndex, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void LeavePartyOf(AGothicCharacterState* Other);
    
    UFUNCTION(BlueprintCallable)
    void LearnRecipe(TSubclassOf<UItemRecipeDefinition> RecipeDefinition);
    
    UFUNCTION(BlueprintCallable)
    void JoinPartyOf(AGothicCharacterState* Other);
    
    UFUNCTION(BlueprintPure)
    bool IsTrulyPartOfGuild(const FGameplayTag& GuildTag) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPersistent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOfSpecies(const FGameplayTag& SpeciesTag) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInPartyWith(const AGothicCharacterState* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInFullyLoadedRegion(float Radius) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDefeated() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsApparentlyPartOfGuild(const FGameplayTag& GuildTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasLearnedRecipe(TSubclassOf<UItemRecipeDefinition> RecipeDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasEverLeftArea(FGameplayTag Area);
    
    UFUNCTION(BlueprintCallable)
    bool HasEverEnteredArea(FGameplayTag Area);
    
protected:
    UFUNCTION()
    void HandlePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);
    
public:
    UFUNCTION(BlueprintPure)
    UGenericVoicelineComponent* GetVoiceline() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetTransformationOwnerState() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetSpecies() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterRelationshipComponent* GetRelationship() const;
    
    UFUNCTION(BlueprintPure)
    URegionCharacterComponent* GetRegionTraits() const;
    
    UFUNCTION(BlueprintPure)
    UPreferredLocationComponent* GetPreferredLocation() const;
    
    UFUNCTION(BlueprintPure)
    UGothicCharacterPersonality* GetPersonality() const;
    
    UFUNCTION(BlueprintPure)
    ULongTermMemoryComponent* GetLongTermMemory() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetLastEnteredArea() const;
    
    UFUNCTION(BlueprintPure)
    UInventoryComponent* GetInventory() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetInstigatorCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetGuild() const;
    
    UFUNCTION(BlueprintCallable)
    FGothicPathfollowSettings GetDefaultPathfollowingSetting();
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UInteractiveObjectDefinition> GetDefaultInteraction() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetDefaultFacialExpression() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGothicCharacterPersonality> GetCurrentPersonality() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterUniqueName() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetCharacterTransform() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCharacterRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetCharacterRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCharacterLookingDirection() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCharacterLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetCharacterHalfHeight() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCharacterGlobalId() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetCharacterEvenDuringInit() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCharacterDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    UCharacterDefinition* GetCharacterDefinition() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAreaTagOfLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetApproximateNavAgentLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetApproximateFeetLocation() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UItemRecipeDefinition>> GetAllKnownRecipes() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAllAreaTagsOfLocation() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacterState* FindClosestByUniqueName(const UObject* WorldContextObject, FName UniqueName, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacterState* FindByUniqueName(const UObject* WorldContextObject, FName UniqueName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacterState* FindByGlobalId(const UObject* WorldContextObject, FName GlobalId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicCharacterState*> FindAllInRadiusAroundWithTags(const UObject* WorldContextObject, const FVector& Location, float Radius, const FGameplayTagContainer& WithAnyOf, const FGameplayTagContainer& WithoutAnyOf);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicCharacterState*> FindAllInRadiusAround(const UObject* WorldContextObject, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicCharacterState*> FindAllByUniqueName(const UObject* WorldContextObject, FName UniqueName);
    
    UFUNCTION()
    bool IsDataReady() const override PURE_VIRTUAL(IsDataReady, return false;);
    
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; };
};

