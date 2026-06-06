#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Alcohol.generated.h"

UCLASS()
class G1R_API UAttributeSet_Alcohol : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Alcohol)
    FGameplayAttributeData Alcohol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxAlcohol)
    FGameplayAttributeData MaxAlcohol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlcoholDepletionRate)
    FGameplayAttributeData AlcoholDepletionRate;
    
    UAttributeSet_Alcohol();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_MaxAlcohol(const FGameplayAttributeData& OldMaxAlcohol);
    
    UFUNCTION()
    void OnRep_AlcoholDepletionRate(const FGameplayAttributeData& OldAlcoholDepletionRate);
    
    UFUNCTION()
    void OnRep_Alcohol(const FGameplayAttributeData& OldAlcohol);
    
};

