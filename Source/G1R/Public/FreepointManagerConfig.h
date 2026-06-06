#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EInteractionSpotEntryDirection.h"
#include "FreepointConfig_DEPRECATED.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "FreepointManagerConfig.generated.h"

class UFreepointActionTagList;
class UNavArea;
class UTimeRange;
class UWeatherCondition;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UFreepointManagerConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> InteractionSpotSourceFiles;
    
protected:
    UPROPERTY()
    TArray<FFreepointConfig_DEPRECATED> FreePoints;
    
public:
    UFreepointManagerConfig();

    UFUNCTION(BlueprintCallable)
    void SetRadius(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(float Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(FName Level);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryDirection(EInteractionSpotEntryDirection EntryDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownOnFreepoint(float cooldown);
    
    UFUNCTION(BlueprintCallable)
    void SetCanChainActionOnFreepoint();
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAnyOrientationWhenUsingFreepoint();
    
    UFUNCTION(BlueprintPure)
    TArray<FFreepointConfig_DEPRECATED> GetRegisteredFreepoints() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWeatherConditionOnFreepoint(TSubclassOf<UWeatherCondition> WeatherCondition);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeRangeOnFreepoint(TSubclassOf<UTimeRange> TimeRange);
    
    UFUNCTION(BlueprintCallable)
    void AddTagOnFreepoint(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddTagListOnFreepoint(TSubclassOf<UFreepointActionTagList> tagList);
    
    UFUNCTION(BlueprintCallable)
    void AddNavAreaOnFreepoint(TSubclassOf<UNavArea> NavArea);
    
    UFUNCTION(BlueprintCallable)
    void AddFreepoint(FName Name, FRotator Rotator, FVector position);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacterUniqueNameRestrictionOnFreepoint(FName UniqueName);
    
    UFUNCTION(BlueprintCallable)
    void AddAcceptedCharacterOnFreepoint(const FGameplayTag& Tag);
    
};

