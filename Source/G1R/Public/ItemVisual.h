#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ItemVisual.generated.h"

class UActionKeywords;
class UItemDefinition;

UCLASS()
class G1R_API AItemVisual : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GripSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SecondGripSocketNameUntrained;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SecondGripSocketNameTrained;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SecondGripSocketNameMaster;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_IsInMeleeSlot;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Replicated)
    UItemDefinition* Item;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag WeaponMaterialTag;
    
    UPROPERTY()
    TMap<FGameplayTag, UActionKeywords*> m_ActionKeywords;
    
protected:
    UPROPERTY(Replicated)
    bool m_IsEquipped;
    
    UPROPERTY(Replicated)
    bool m_ShouldHide;
    
public:
    AItemVisual(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool ShouldBeHidden);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ItemBeingEquipped();
    
    UFUNCTION(BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasActionKeyword(FGameplayTag ActionKeyword);
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, UActionKeywords*> GetAllActionKeywords() const;
    
    UFUNCTION(BlueprintCallable)
    UActionKeywords* GetActionKeywords(FGameplayTag ActionKeyword);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAttackKeywordEffect();
    
    UFUNCTION(BlueprintCallable)
    void ActivateAttackKeywordEffect(FGameplayTag AttackKeywordTag);
    
};

