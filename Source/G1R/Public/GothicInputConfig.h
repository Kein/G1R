#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GothicActionContext.h"
#include "GothicInputAction.h"
#include "GothicInputConfig.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicInputConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGothicInputAction> NativeInputActions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGothicInputAction> AbilityInputActionsPress;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGothicInputAction> AbilityInputActionsRelease;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGothicInputAction> AbilityInputActionsToggle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGothicInputAction> GameplayEventInputActions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FGothicInputAction> AddInputContextActions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FGothicActionContext> TagInputMappingContextArray;
    
    UGothicInputConfig();

};

