#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityPickAndCarry.generated.h"

class ACarriableWorldItem;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UItemDefinition;

UCLASS()
class G1R_API UGameplayAbilityPickAndCarry : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ApplicableItemTypes;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimMontage> CarryMontage;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACarriableWorldItem> CarryItemClass;
    
    UPROPERTY()
    TSubclassOf<UItemDefinition> CarryItemDefinitionClass;
    
    UPROPERTY()
    ACarriableWorldItem* CarryItem;
    
    UPROPERTY(EditAnywhere)
    FRotator PutdownRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector PutdownPositionOffset;
    
    UPROPERTY()
    UAnimMontage* ActiveMontage;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimMontage> ObjectCarryMontage;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* MontageTask;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* ObjectMontageTask;
    
    UPROPERTY(EditAnywhere)
    FName AttachmentSocketName;
    
public:
    UGameplayAbilityPickAndCarry();

    UFUNCTION(BlueprintCallable)
    void TakeOutItemOfType(TSubclassOf<UItemDefinition> ItemDefinition, bool bPlayPickUpAnimation);
    
protected:
    UFUNCTION()
    void HandlePutDownCompleted();
    
    UFUNCTION()
    void HandlePickupBlendingOut();
    
};

