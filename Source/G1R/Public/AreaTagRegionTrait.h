#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RegionTrait.h"
#include "AreaTagRegionTrait.generated.h"

class UAreaTagRegionTrait;
class UObject;

UCLASS(EditInlineNew)
class G1R_API UAreaTagRegionTrait : public URegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag AreaName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Priority;
    
    UAreaTagRegionTrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag FindAreaTagAtLocation(const UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAreaTagRegionTrait* FindAreaAtLocation(const UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer FindAllAreaTagsAtLocation(const UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UAreaTagRegionTrait*> FindAllAreasAtLocation(const UObject* WorldContextObject, const FVector& Location);
    
};

