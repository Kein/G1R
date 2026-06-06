#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "InteractorComponent.generated.h"

class AGothicCharacter;
class UAbilityTask_InteractionSpot;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UInteractorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UAbilityTask_InteractionSpot>> TasksByActionTags;
    
    UInteractorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    static TArray<TSubclassOf<UAbilityTask_InteractionSpot>> FindDefaultInteractionsForCharacterClass(TSubclassOf<AGothicCharacter> CharacterClass);
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UAbilityTask_InteractionSpot>> FindAllTasksMatchingTag(const FGameplayTag& Tag) const;
    
};

