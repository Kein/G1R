#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InterfaceManagementContentChild.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class G1R_API UInterfaceManagementContentChild : public UInterface {
    GENERATED_BODY()
};

class G1R_API IInterfaceManagementContentChild : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelection(FGameplayTag _FilterTag, const UObject* _Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelevantButtonClicked(const FGameplayTag& _GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTabChangeAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasUnseenChanges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetTabTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetRelevantButtonTags() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastTabChangedAllowedChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastButtonRelevanceChanged() const;
    
};

