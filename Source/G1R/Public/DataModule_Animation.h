#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataModule.h"
#include "DataModule_Animation.generated.h"

class UAnimConfig;
class UInteractAnimConfig;
class UItemAnimConfig;

UCLASS(BlueprintType)
class G1R_API UDataModule_Animation : public UDataModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, ReplicatedUsing=OnRep_Config)
    UAnimConfig* m_AnimConfig;
    
    UPROPERTY(Instanced)
    UItemAnimConfig* m_CurrentAnimConfig;
    
    UPROPERTY(Instanced)
    UItemAnimConfig* m_DefaultAnimConfig;
    
public:
    UDataModule_Animation();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_Config();
    
public:
    UFUNCTION(BlueprintPure)
    UItemAnimConfig* GetItemAnimConfig(const FGameplayTag& ItemType) const;
    
    UFUNCTION(BlueprintPure)
    UInteractAnimConfig* GetInteractConfig(const FGameplayTag& interactionTag) const;
    
    UFUNCTION(BlueprintPure)
    UItemAnimConfig* GetCurrentAnimConfig();
    
};

