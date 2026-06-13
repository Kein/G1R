#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GuildAreaOwnershipModifier.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType)
class G1R_API UGuildAreaOwnershipModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer OwnedAreas;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer Except;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer ForGuild;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Weight;
    
    UGuildAreaOwnershipModifier();

    UFUNCTION(BlueprintNativeEvent)
    bool IsApplicableNow() const;
    
};

