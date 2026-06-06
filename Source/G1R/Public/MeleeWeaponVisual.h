#pragma once
#include "CoreMinimal.h"
#include "ItemVisual.h"
#include "Templates/SubclassOf.h"
#include "MeleeWeaponVisual.generated.h"

class AGothicCharacter;
class UGothicWeaponBloodComponent;
class UItemDefinition;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS()
class G1R_API AMeleeWeaponVisual : public AItemVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* m_MeshComp;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_WeaponMatInst;
    
    UPROPERTY(Instanced)
    UGothicWeaponBloodComponent* m_WeaponBlood;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SecondBlockSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UItemDefinition> m_ItemRequiredForStateA;
    
    AMeleeWeaponVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(AGothicCharacter* Target, float relativeDamage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnMissingRequiredItem();
    
};

