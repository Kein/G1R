#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "TerritoryConfig.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UTerritoryConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AssociatedAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AdditionalAreaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ExcludedAreaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TOptional<float> ConflictRadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AnyOneToBeValidTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllToBeValidTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AnyOneToBeForbiddenTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllToBeForbiddenTags;
    
    UTerritoryConfig();

};

