#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHoldsterLocation.h"
#include "EInventoryTypes.h"
#include "GothicObjectDefinition.h"
#include "OwnershipSettings.h"
#include "Templates/SubclassOf.h"
#include "ItemDefinition.generated.h"

class AActor;
class AItemVisual;
class AItemVisualWorld;
class UAbilitySystemComponent;
class UActionKeywords;
class UAttributeSet;
class UGameplayEffect;
class UInteractiveObjectDefinition;
class UItemDefinition;
class UItemEffectDefinition;
class UItemRecipeDefinition;
class UScriptGameplayEffect;
class UTargetConfigBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class G1R_API UItemDefinition : public UGothicObjectDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_Value;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_MaxStack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_Buoyancy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AItemVisual> m_ItemVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorldDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> m_ItemGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> m_ItemEmptyVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_EquipBlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OnEquipEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UItemRecipeDefinition>> m_LearnRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_RequiredTagsToLearn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UItemEffectDefinition*> m_OnConsumeEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_ForcedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayAttribute, float> m_RequiredStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryTypes m_TryToStoreFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UActionKeywords>> m_ActionsKeywords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> m_ItemStatsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHoldsterLocation m_HoldsterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag m_ParticlesWhenPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag m_EventWhenPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UItemDefinition> m_RequiredToPick;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FOwnershipSettings m_Ownership;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UItemDefinition> m_ReplaceBy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_AutoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTargetConfigBase> m_TargetConfigClass;
    
public:
    UItemDefinition();

    UFUNCTION(BlueprintCallable)
    void SetItemType(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemSpec(FGameplayTag itemSpec);
    
    UFUNCTION(BlueprintPure)
    bool MatchesItemTypeExactly(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    bool MatchesItemType(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AItemVisualWorld> LoadAndGetVisualWorldClass() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AItemVisual> LoadAndGetVisualClass() const;
    
    UFUNCTION(BlueprintPure)
    AItemVisual* LoadAndGetVisual() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AItemVisualWorld> LoadAndGetThrowVisualWorldClass() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> LoadAndGetEmptyVisualClass() const;
    
    UFUNCTION(BlueprintPure)
    AActor* LoadAndGetEmptyVisual() const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemSpecExactly(const FGameplayTag& SpecTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasItemSpec(const FGameplayTag& SpecTag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyItemSpecsExactly(const FGameplayTagContainer& specTags) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyItemSpecs(const FGameplayTagContainer& specTags) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAllItemSpecsExactly(const FGameplayTagContainer& specTags) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAllItemSpecs(const FGameplayTagContainer& specTags) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UTargetConfigBase> GetTargetConfigClass() const;
    
    UFUNCTION(BlueprintPure)
    FText GetItemTypeDisplayText() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetItemType() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetItemSpec(const FGameplayTag& SpecTag) const;
    
    UFUNCTION(BlueprintCallable)
    static TMap<FGameplayAttribute, float> GetAttributeListFromGEList(const UAbilitySystemComponent* abComp, TArray<TSubclassOf<UScriptGameplayEffect>> GEList);
    
    UFUNCTION(BlueprintCallable)
    FGameplayAttribute GetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName);
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAllMatchingSpecs(const FGameplayTag& SpecTag) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeEquippedBy(const UAbilitySystemComponent* abComp) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void ApplyTo(UAbilitySystemComponent* Owner);
    
    UFUNCTION(BlueprintCallable)
    void AddPossibleActionAfterDrop(FGameplayTag itemSpec);
    
    UFUNCTION(BlueprintCallable)
    UItemEffectDefinition* AddOnConsume(TSubclassOf<UGameplayEffect> effectToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddLearningRecipes(TSubclassOf<UItemRecipeDefinition> recipe);
    
    UFUNCTION(BlueprintCallable)
    void AddItemSpec(FGameplayTag itemSpec);
    
    UFUNCTION(BlueprintCallable)
    void AddItemReqTag(FGameplayTag itemSpec);
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionEffect(FGameplayTag CollisionEffect);
    
};

