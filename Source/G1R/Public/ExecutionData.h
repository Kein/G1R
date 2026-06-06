#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataConfigPreloadable.h"
#include "TagMontageArray.h"
#include "ExecutionData.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class G1R_API UExecutionData : public UDataAsset, public IDataConfigPreloadable {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FTagMontageArray> m_ExecutionMontages;
    
    UPROPERTY()
    TSoftObjectPtr<UAnimMontage> m_DefaultExecutionMontage;
    
public:
    UExecutionData();

    UFUNCTION(BlueprintCallable)
    void SetDefaultExecutionMontage(FName Montage);
    
    UFUNCTION(BlueprintCallable)
    void AddExecutionMontage(FGameplayTagContainer MetaData, FName Montage);
    

    // Fix for true pure virtual functions not being implemented
};

