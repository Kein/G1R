#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_Swampweed.generated.h"

UCLASS()
class G1R_API UAttributeSet_Swampweed : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Swampweed)
    FGameplayAttributeData Swampweed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxSwampweed)
    FGameplayAttributeData MaxSwampweed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SwampweedDepletionRate)
    FGameplayAttributeData SwampweedDepletionRate;
    
    UAttributeSet_Swampweed();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_SwampweedDepletionRate(const FGameplayAttributeData& OldSwampweedDepletionRate);
    
    UFUNCTION()
    void OnRep_Swampweed(const FGameplayAttributeData& OldSwampweed);
    
    UFUNCTION()
    void OnRep_MaxSwampweed(const FGameplayAttributeData& OldMaxSwampweed);
    
};

