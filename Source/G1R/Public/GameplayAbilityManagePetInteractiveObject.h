#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityManagePetInteractiveObject.generated.h"

class UInteractiveObjectDefinition;

UCLASS()
class G1R_API UGameplayAbilityManagePetInteractiveObject : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_InteractiveObjectDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_BlockPettingTags;
    
public:
    UGameplayAbilityManagePetInteractiveObject();

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveInteractiveObject();
    
private:
    UFUNCTION()
    void OnTagEventRegistered(const FGameplayTag InTag, int32 NewCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateInteractiveObject();
    
};

