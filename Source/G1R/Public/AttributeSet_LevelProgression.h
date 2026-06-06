#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.h"
#include "AttributeSet_LevelProgression.generated.h"

UCLASS()
class G1R_API UAttributeSet_LevelProgression : public UAttributeSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Level)
    FGameplayAttributeData Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Experience)
    FGameplayAttributeData Experience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Skillpoints)
    FGameplayAttributeData SkillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Skillpoints)
    FGameplayAttributeData XPExecutedBounty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Skillpoints)
    FGameplayAttributeData XPKillOrDefeatBounty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttributeData Toughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttributeData ToughnessA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttributeData ToughnessB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttributeData ToughnessC;
    
    UAttributeSet_LevelProgression();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_XPKillOrDefeatBounty(const FGameplayAttributeData& OldXPBounty);
    
    UFUNCTION()
    void OnRep_XPExecutedBounty(const FGameplayAttributeData& OldXPBounty);
    
    UFUNCTION()
    void OnRep_Skillpoints(const FGameplayAttributeData& OldSkillpoints);
    
    UFUNCTION()
    void OnRep_Level(const FGameplayAttributeData& OldLevel);
    
    UFUNCTION()
    void OnRep_Experience(const FGameplayAttributeData& OldExperience);
    
};

