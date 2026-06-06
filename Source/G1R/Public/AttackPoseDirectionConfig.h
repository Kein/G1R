#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttackConfig.h"
#include "TagMontage.h"
#include "AttackPoseDirectionConfig.generated.h"

UCLASS(Abstract)
class G1R_API UAttackPoseDirectionConfig : public UAttackConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTagMontage> m_Options;
    
public:
    UAttackPoseDirectionConfig();

    UFUNCTION(BlueprintCallable)
    void AddOption(FGameplayTagContainer MetaData, FName Montage);
    
};

