#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GuildAreaOwnershipModifier.generated.h"

UCLASS(Abstract, Blueprintable)
class G1R_API UGuildAreaOwnershipModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer OwnedAreas;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Except;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ForGuild;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UGuildAreaOwnershipModifier();

    UFUNCTION(BlueprintNativeEvent)
    bool IsApplicableNow() const;
    
};

