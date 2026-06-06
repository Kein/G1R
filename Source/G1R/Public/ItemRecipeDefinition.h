#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFinalItem.h"
#include "ItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "ItemRecipeDefinition.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UItemRecipeDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSubclassOf<UItemDefinition>, int32> m_RequiredIngredients;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FString> m_RequiredTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSubclassOf<UItemDefinition>, int32> m_FinalItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UItemDefinition> m_IntermediateItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FString, int32> m_RequiredAttributes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_RequiredTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, FString> m_CraftingSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EFinalItem m_FinalItemSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_NextAbility;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString m_ForcedAnimCraft;
    
    UItemRecipeDefinition();

};

