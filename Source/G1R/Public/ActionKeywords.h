#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "ActionKeywords.generated.h"

class UGameplayEffect;

UCLASS(BlueprintType)
class G1R_API UActionKeywords : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_Keywords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_OnEquipActionEffect;
    
public:
    UActionKeywords();

    UFUNCTION(BlueprintPure)
    TSubclassOf<UGameplayEffect> GetOnEquipEffect() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetKeywords();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetActionTag();
    
};

