#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "ItemSpawnConfig.h"
#include "Templates/SubclassOf.h"
#include "WorldItemSpawnConfig.generated.h"

class UCharacterDefinition;
class UItemDefinition;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UWorldItemSpawnConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FName, FItemSpawnConfig> m_ItemSpawnConfigs;
    
public:
    UWorldItemSpawnConfig();

    UFUNCTION(BlueprintCallable)
    void SetWorldPoint(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetRefill(int32 refillTime);
    
    UFUNCTION(BlueprintCallable)
    void SetInheritOwnershipFromArea(bool inherit);
    
    UFUNCTION(BlueprintCallable)
    void AddOwnerGuild(const FGameplayTag& ownerGuild);
    
    UFUNCTION(BlueprintCallable)
    void AddOwnerCharacter(TSubclassOf<UCharacterDefinition> OwnerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AddItemsEvent(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(int32 Amount, TSubclassOf<UItemDefinition> ItemClass);
    
};

